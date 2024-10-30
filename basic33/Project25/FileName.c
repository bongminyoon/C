//-------------- - arduino data sending code

#include <SimpleDHT.h>  
#include <SoftwareSerial.h>

#define DHT_PIN A0
SimpleDHT11 dht11;            // SimpleDHT11 객체 생성
SoftwareSerial softSerial(2, 3);  // 소프트웨어 시리얼 객체 생성 (RX, TX 핀)

void setup() {
    Serial.begin(9600);        // 시리얼 통신 초기화 (모니터 출력용)
    softSerial.begin(9600);    // 소프트웨어 시리얼 통신 초기화 (다른 보드와 통신용)
}

void loop() {
    byte temp, humi;            // 온도와 습도를 저장할 변수 선언
    int err = SimpleDHTErrSuccess; // DHT11 센서에서 발생한 오류 코드

    // DHT11 센서로부터 온도와 습도 읽기
    dht11.read(DHT_PIN, &humi, &temp, NULL);

    // 온습도 값을 문자열로 포맷하여 소프트웨어 시리얼로 전송
    char msg[10];               // 충분한 크기의 문자열 버퍼 할당
    sprintf(msg, "%d:%dL", (int)humi, (int)temp); // 온습도 값을 문자열로 변환하여 msg에 저장
    softSerial.print(msg);    // 소프트웨어 시리얼로 문자열 전송

    // 전송한 메시지를 시리얼 모니터에 출력
    // Serial.print("Sent: ");     // "Sent: " 출력
    Serial.print(msg);        // 전송한 메시지 출력 (온습도 값)

    delay(2000);                // 2초 대기---p-----------------------------------------------------------------------------------------------------------------------------------------------------------------r
}






//-------------- - sensing, database, led code

#include <stdio.h>
#include <stdlib.h>
#include <mysql/mysql.h>
#include <errno.h>
#include <string.h>

#include <wiringPi.h>
#include <wiringSerial.h>

#define red 13
#define green 19
#define blue 26

static char* host = "localhost";
static char* user = "root";
static char* pass = "poly";
static char* dbname = "test2";

char device[] = "/dev/ttyACM0";

int fd;
unsigned long baud = 9600;

int main()
{
    printf("%s \n", "Raspberry Startup");
    fflush(stdout);

    if ((fd = serialOpen(device, baud)) < 0)
    {
        fprintf(stderr, "Unable to open serial device %s\n", strerror(errno));
        digitalWrite(red, 1);
        delay(500);
        digitalWrite(red, 0);
        return 1;
    }

    if (wiringPiSetupGpio() < 0) // wpi wiringPiSetup()
    {
        return -1;
    }


    pinMode(red, OUTPUT);
    pinMode(green, OUTPUT);
    pinMode(blue, OUTPUT);
    digitalWrite(red, 0);
    digitalWrite(green, 0);
    digitalWrite(blue, 0);

    char receivedData[100] = { 0 };
    int index = 0;
    MYSQL* conn;
    conn = mysql_init(NULL);
    int res;

    if (!(mysql_real_connect(conn, host, user, pass, dbname, 0, NULL, 0)))
    {
        fprintf(stderr, "mysql error: %s[%d]\n", mysql_error(conn), mysql_errno(conn));
        digitalWrite(red, 1);
        delay(500);
        digitalWrite(red, 0);
        exit(1);
    }
    printf("Database Connection Successful\n\n");

    while (1)
    {
        if (serialDataAvail(fd))
        {
            receivedData[index++] = serialGetchar(fd);
            if (receivedData[index - 1] == 'L')
            {
                printf("original data: %s\n", receivedData);

                digitalWrite(green, 1);
                delay(500);
                digitalWrite(green, 0);

                index = 0;
                int humi = 0;
                int temp = 0;

                char* tokendata = strtok(receivedData, ":");
                if (tokendata != NULL) {
                    humi = atoi(tokendata);
                    printf("humi: %d\n", humi);
                }
                tokendata = strtok(NULL, "L");
                if (tokendata != NULL) {
                    temp = atoi(tokendata);
                    printf("temp: %d\n", temp);
                }

                char query[100];
                sprintf(query, "INSERT INTO sensing(id, humi, temp) VALUES (NULL, %d, %d)", humi, temp);

                res = mysql_query(conn, query);

                if (!res)
                {
                    printf("inserted %lu rows\n", (unsigned long)mysql_affected_rows(conn));
                    digitalWrite(blue, 1);
                    delay(500);
                    digitalWrite(blue, 0);
                }
                else
                    fprintf(stderr, "insert error %s[%d]\n", mysql_error(conn), mysql_errno(conn));

                for (int i = 0; i < sizeof(receivedData); i++) {
                    receivedData[i] = 0;
                }
            }
            digitalWrite(red, 0);
            digitalWrite(green, 0);
            digitalWrite(blue, 0);
            delay(100);
        }
    }
    mysql_close(conn);
    return 0;
}