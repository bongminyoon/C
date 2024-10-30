//#include <stdio.h>
//
//int main(void)
//{
//	int ary[3];
//	int i;
//
//	*(ary + 0) = 10;
//	*(ary + 1) = *(ary + 0) + 10;
//
//	printf("세 번째 배열 요소에 키보드 입력 : ");
//	scanf("%d", ary + 2);
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("%5d", *(ary + i));
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int ary[3];				//배열 선언
//	int* pa = ary;			//포인터에 배열명 저장
//	int i;					//반복 제어 변수
//
//	*pa = 10;				//첫 번째 배열 요소에 10대입
//	*(pa + 1) = 20;			//두 번째 뱌열 요소에 20대입
//	pa[2] = pa[0] + pa[1];	//대괄호를 써서 pa를 배열명 처럼 사용
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("%5d", pa[i]);  //ary[i], *(pa++) 해도 무관
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int ary[5] = { 10,20,30,40,50 };
//	int* pa = ary;					//첫 번째 배열 요소 주소
//	int* pb = pa + 3;				//네 번째 배열 요소 주소
//
//	printf("pa : %u\n", pa);		
//	printf("pb : %u\n", pb);		
//	pa++;							//pa를다음 배열 요소로 이동
//	printf("pb - pa : %u\n", pb - pa); //두 포인터의 뺄셈
//
//	printf("앞에 있는 배열 요소의 값 출력 : ");
//	if (pa < pb) printf("%d\n", *pa);	//pa가 배열 앞에있으면 *pa를 출력
//	else printf("%d\n", *pb);			//pb가 배열 앞에있으면 *pb를 출력
//
//	return 0;
//}

//#include <stdio.h>
//
//void print_ary(int* pa/*, int size*/); //(int *) 로 사용할 수 있다.
//
//int main(void)
//{
//	int ary[5] = { 10,20,30,40,50 };	//함수선언
//
//	print_ary(ary/*,sizeof(ary)/sizeof(ary[0])*/);				//배열명을 주고 함수 호출
//
//	return 0;
//}
//
//void print_ary(int* pa/*,int size*/)			//매개변수로 포인터 선언
//{
//	int i;
//	
//	for (i = 0; i < 5/*size*/; i++)
//	{
//		printf("%d ", pa[i]);	//pa로 배열 요소 표현식 사용
//	}
//}

#include <stdio.h>

void print_ary(int* pa, int size); 

int main(void)
{
	//int ary1[5] = { 10,20,30,40,50 };	
	int ary2[7] = { 10,20,30,40,50,60,70 }; 

	print_ary(ary2, 5);  //sizeof(ary1)/ sizeof(ary1[1])
	printf("\n");
	print_ary(ary2, 7); //sizeof(ary2)/ sizeof(ary2[1])

	return 0;
}

void print_ary(int* pa, int size)			
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d ", pa[i]);	
	}
}