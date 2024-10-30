//#include <stdio.h>
//#include <stdlib.h>		//malloc, free 함수 사용을 위한 헤더파일
//
//int main(void)
//{
//	int* pi;			//동적 할당 영역을 연결할 포인터 선언
//	double* pd;
//
//	pi = (int*)malloc(sizeof(int));	//메모리 동적 할당 후 포인터 연결
//	if (pi == NULL)					//동적 할당에 실패하면 null 포인터 반환
//	{
//		printf("#으로 메모리가 부족합니다.\n");
//		exit(1);	//프로그램 종료
//	} //예외 처리 하는것
//	pd = (double*)malloc(100);
//
//	*pi = 10;		//포인터로 동적 할당 영역 사용
//	*pd = 3.4;
//
//	printf("정수형으로 사용 : %d\n", *pi);
//	printf("실수형으로 사용 : %lf\n", *pd);
//
//	free(pi);		//동적 할당 영역 반환
//	free(pd);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int* pi;
//	int i, sum = 0;
//
//	pi = (int*)malloc(5 * sizeof(int));
//	if (pi == NULL)
//	{
//		printf("메모리가 부족합니다\n");
//		exit(1);
//	}
//	printf("5명의 나이를 입력하세요 : ");
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &pi[i]);
//		sum += pi[i];
//	}
//	printf("5명의 평균 나이 : %.1lf\n", (sum / 5.0));
//	printf("%d", _msize(pi));
//	free(pi);
//
//	return 0;
//}


