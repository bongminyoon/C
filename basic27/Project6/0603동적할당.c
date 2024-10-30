//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* pi;		//할당한 저장공간을 연결할 포인터
//	int size = 5;	//한 번에 할당할 저장공간의 크기, int형 변수 5개 씩
//	int cnt = 0;	//현재 입력된 양수의 개수
//	int num;		//양수를 입력할 변수
//	int i;			//반복 제어 변수
//
//	pi = (int*)calloc(size, sizeof(int));	//먼저 5개의 저장 공간 할당
//	while (1)
//	{
//		printf("양수를 입력하세요 =>");
//		scanf("%d", &num);			//데이터 입력
//		if (num <= 0)break;			//0또는 음수이면 종료
//		if (cnt < size)				//저장 공간이 남아 있으면
//		{
//			pi[cnt ++] = num;
//		}
//		else						//저장공간이 부족하면
//		{
//			size += 5;				//크기를 늘려서 재할당
//			pi = (int*)realloc(pi, size * sizeof(int));
//			pi[cnt++] = num;		//재할당한 공간에 값 대입
//		}
//	}
//
//	for (i = 0; i < cnt; i++)
//	{
//		printf("%5d", pi[i]);	//입력 데이터 출력
//	}
//	free(pi);			//동적할당 저장공간 반납
//
//	return 0;
//}


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char temp[80];
	char* str[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("문자열을 입력하세요 :");
		gets(temp);
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
	}

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]);
	}

	for (i = 0; i < 3; i++)
	{
		free(str[i]);
	}

	return 0;
}