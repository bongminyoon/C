//#include<stdio.h>
//
//void print_line(void); //함수선언
//
//int main(void)
//{
//	print_line();	//함수 호출
//	printf("학번    이름    전공    학점\n");
//	print_line();	//함수 호출
//
//	return 0;
//}
//
//void print_line(void)
//{
//	int i;
//
//	for (i = 0; i < 50; i++) //50번 반복하여 '-' 출력
//	{
//		printf("-");
//	}
//	printf("\n");
//}

//#include <stdio.h>
//
//void fruit(void); //함수 선언
//
//int main(void)
//{
//	fruit();	//함수 호출
//
//	return 0;
//}
//
//
//void fruit(void)	//재귀호출 함수 정의
//{
//	printf("apple\n");	
//	fruit();	//자신을 다시 호출
//}

//#include <stdio.h>
//
//void fruit(int n);
//
//int main(void)
//{
//
//	fruit(1);	//처음 호출하므로 1을 인수로 줌
//
//	return 0;
//}
//
//void fruit(int n)	//호출횟수를 매개변수에 저장
//{
//	printf("apple\n");
//	if (n == 3) return;	//호출횟수가 3번이면 반환하고 끝
//	fruit(n + 1);	//재호출 할 때 호출횟수를 1증가
//}

//#include <stdio.h>
//
//void fruit(int n);
//
//int main(void)
//{
//	fruit(1);
//
//	return 0;
//}
//
//void fruit(int n)
//{
//	printf("apple\n");
//	if (n == 3)return;
//	fruit(n + 1);
//	printf("jam\n");
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int ary[5]; //int형 요소 5개 배열 선언
//
//	ary[0] = 10;
//	ary[1] = 20;
//	ary[2] = ary[0] + ary[1];
//	scanf("%d", &ary[3]);
//
//	printf("%d\n", ary[2]);
//	printf("%d\n", ary[3]);
//	printf("%d\n", ary[4]);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int ary1[5] = { 1,2,3,4,5 };
//	int ary2[5] = { 1,2,3 };
//	int ary3[] = { 1,2,3 };
//	double ary4[5] = { 1.0,2.1,3.2,4.3,5.4 };
//	char ary5[5] = { 'a','p','p','l','e' };
//
//	ary1[0] = 10;
//	ary1[1] = 20;
//	ary1[2] = 30;
//	ary1[3] = 40;
//	ary1[4] = 50;
//
//	return 0;
//}

#include <stdio.h>

int main(void)
{
	int score[5];
	int i;
	int tot = 0;
	double avg;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]);
	}

	for (i = 0; i < 5; i++)
	{
		tot += score[i];
	}
	avg = tot / 5.0;

	for (i = 0; i < 5; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("평균 : %.1lf\n", avg);

	return 0;
}
