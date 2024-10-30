//#include <stdio.h>
//
//int main()
//{
//	int a = 10, b = 15, tot;	//변수 선언과 초기화
//	double avg;					//평균을 저장할 변수
//	int* pa, *pb;				//포인터 동시 선언
//	int* pt = &tot;				//포인터 선언과 초기화
//	double* pg = &avg;			//실수형 포인터 선언과 초기화
//
//	pa = &a;					//포인터 pa에 변수 a의 주소 대입
//	pb = &b;					//포인터 pb에 변수 b의 주소 대입
//
//	*pt = *pa + *pb;			//a값과 b값을 더해 tot에 저장
//	*pg = *pt / 2.0;			//tot값을 2로 나눈 값을 avg에 저장
//
//	printf("두 정수의 값 : %d, %d\n", *pa, *pb);	//a값과 b값출력
//	printf("두 정수의 합 : %d\n", *pt);			//tot값 출력
//	printf("두 정수의 평균 : %.1lf\n", *pg);		//avg값 출력
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 10, b = 20;
//	const int* pa = &a; //포인터 pa는 변수 a를 가리킨다.
//	int* const pb = &b; //pb는 다른 변수의 주소를 가르킬수 없음
//
//	//*pa = 30; const 오류
//	//pb = &a ; const 오류
//
//	
//	printf("변수 a값 : %d\n", *pa);	//포인터를 간접참조하여 a출력
//	pa = &b;						//포인터가 변수 b를 가리키게 한다.
//	printf("변수 b값 : %d\n", *pa);	//포인터를 간접참조하여 b값 출력
//	a = 20;							//a를 직접 참조하여 값을 바꾼다
//	printf("변수 a값 : %d\n", *pa);	//포인터로 간접참조하여 바뀐값 출력
//	
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char ch;
//	int in;
//	double db;
//
//	char* pc = &ch;
//	int* pi = &in;
//	double* pd = &db;
//
//	printf("char형 변수의 주소 크기 : %d\n", sizeof(&ch));
//	printf("int형 변수의 주소 크기 : %d\n", sizeof(&in));
//	printf("double형 변수의 주소 크기 : %d\n", sizeof(&db));
//
//	printf("char * 포인터의 크기 : %d\n", sizeof(pc));
//	printf("int * 포인터의 크기 : %d\n", sizeof(pi));
//	printf("double * 포인터의 크기 : %d\n", sizeof(pd));
//
//	printf("char * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pc));
//	printf("int * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pi));
//	printf("double * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pd));
//
//	return 0;
//}

#include <stdio.h>

void swap(int* pa, int* pd); // 두 변수의 값을 바꾸는 함수의 선언

int main()
{
	int a = 10, b = 20;		//변수 선언과 초기화

	swap(&a, &b);			//a,b의 주소를 인수로 주고 함수 호출
	printf("a:%d, b: %d", a, b); //변수 a,b 출력

	return 0;
}

void swap(int* pa, int* pb)	//매개변수로 포인터 선언
{
	int temp;				//교환을 위한 임시 변수

	temp = *pa;				//temp에 pa가 가리키는 변수의 값 저장
	*pa = *pb;				//pa가 가리키는 변수에 pb가 가리키는 변수의 값 저장
	*pb = temp;				//pb가 가리키는 변수에 temp값 저장
}