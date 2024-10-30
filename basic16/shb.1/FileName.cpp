#include <iostream>
#include <string>
using namespace std;

// 문자열 압축 함수
string compressString(const string& input) {
    string compressed = ""; // 압축된 문자열을 저장할 변수
    int count = 1; // 동일 문자의 개수를 세는 변수

    // 입력받은 문자열을 순회하며 압축
    for (int i = 0; i < input.length(); i++) {
        // 현재 문자와 다음 문자가 같다면 count 증가
        if (i < input.length() - 1 && input[i] == input[i + 1]) {
            count++;
        }
        else {
            // 현재 문자를 압축 문자열에 추가
            compressed += input[i];
            // 문자가 2번 이상 반복되면 반복 횟수를 추가
            if (count > 1) {
                compressed += to_string(count);
                count = 1; // 카운트 초기화
            }
        }
    }

    return compressed;
}

int main() {
    string userInput;

    // 사용자로부터 문자열 입력 받기
    cout << "Enter a string: ";
    getline(cin, userInput);

    // 압축된 문자열 출력
    string compressedString = compressString(userInput);
    cout << "Compressed string: " << compressedString << endl;

    return 0;
}
