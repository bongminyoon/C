int add(int x, int y)	//add 함수 정의 시작
{
	int temp;	//두 정수의 합을 잠시 저장할 변수

	temp = x + y;	//x와 y의 함을 temp에 보관

	return temp;	//temp의 값을 반환
}				//add 함수의 끝
//0411 

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