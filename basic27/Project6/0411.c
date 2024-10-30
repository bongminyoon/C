//#include <stdio.h>
//#include "add.h"
//int add(int x, int y);	//add 함수 선언

//int main(void)	//메인 함수 시작
//{
//	int a = 10, b = 20;
//	int res;
//
//	res = add(a, b);	//add 함수 호출
//	printf("result : %d\n", res);
//
//	return 0;	
//}				//main 함수의 끝
//int add(int x, int y)	//add 함수 정의 시작
//{
//	int temp;	//두 정수의 합을 잠시 저장할 변수
//
//	temp = x + y;	//x와 y의 함을 temp에 보관
//
//	return temp;	//temp의 값을 반환
//}				//add 함수의 끝
//15행부터 22행은 주석 해제 안해도 됨.

//매개변수가 없는 함수 예제

//#include <stdio.h>
//
//int get_pos(void);
//
//int main()
//{
//	int res;
//
//	res = get_pos();
//	printf("반환값 : %d\n", res);
//	return 0;
//}
//
//int get_pos(void)
//{
//	int pos;
//
//	printf("양수 입력 :");
//	scanf("%d", &pos);
//	
//	return pos;
//}

//반환값이 없는 함수

#include <stdio.h>

void print_char(char ch, int cnt); //함수선언

int main()
{
	print_char('@', 5);	//문자와 숫자를 주고 함수 호출

	return 0;
}

void print_char(char ch, int cnt) //매개변수는 있으나 반환형은 없다
{
	int i;

	if (cnt > 10)return; //여기서 return하면 함수의 실행을 끝낸다
	for (i = 0; i < cnt; i++)
	{
		printf("%c", ch);//매개변수 ch에 받은 문자 출력
	}
}