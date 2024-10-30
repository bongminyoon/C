#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
	int num;
	double grade;
	char ch;
};
int main(void)
{
	struct student s1;
	s1.num = 2;
	s1.grade = 2.7;
	s1.ch = "bongmin";
	printf("학번 : %d\n", s1.num);
	printf("학점 : %.1lf", s1.grade);
	printf("내이름 : %s", s1.ch);
	return 0;
}
/* {
	char temp[80];
	char* str[3];
	int i;

	for (i = 0; i < 3; i++)
	{

		printf("문자열을 입력하세요 : ");
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
/*
{

	int* pi;
	int size = 5;
	int cnt = 0;
	int num;
	int i;

	pi = (int*)calloc(size, sizeof(int));
	while (1)
	{
		printf("양수를 입력하세요 => ");
		scanf("%d", &num);
		if (num <= 0) break;
		if (cnt < size)
		{
			pi[cnt++] = num;
		}
		else
		{
			size += 5;
			pi = (int*)realloc(pi, size * sizeof(int));
			pi[cnt++] = num;
	
		}
	}
		for (i = 0; i < cnt; i++)
		{
			printf("%5d", pi[i]);
		}
		free(pi);
		
		return 0;
		
}


/*
{
	int* pi;
	int i, sum = 0;

	pi = (int*)malloc(5 * sizeof(int));
	if (pi == NULL)
	{
		printf("메모리가 부족합니다\n");
		exit(1);

	}
	printf("다섯 명의 나이를 입력하세요 : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &pi[i]);
		sum += pi[i];
	}
	printf("다섯 명의 평균나이 :  %.1lf\n", (sum / 5.0));
	free(pi);

	return 0;
}
/* {
	int* pi;
	double* pd;

	pi = (int*)malloc(sizeof(int));
	if (pi == NULL)
	{
		printf("#으로 메모리가 부족합니다.\n");
		exit(1);
	}
	pd = (double*)malloc(sizeof(double));
	*pi = 10;
	*pd = 3.4;

	printf("정수형으로 사용 : %d\n", *pi);
	printf("실수형으로 사용 : %lf\n", *pd);

	free(pi);
	free(pd);

	return 0;
}
		/* {
	int ary1[4] = { 1, 2, 3, 4 };
	int ary2[4] = { 11, 12, 13, 14 };
	int ary3[4] = { 21, 22, 23, 24 };
	int* pary[3] = { ary1, ary2, ary3 };
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", pary[i][j]);
		}
		printf("\n");
	}
	return 0;
}
{
	char* pary[5];
	int i;

	pary[0] = "dog";
	pary[1] = "elephant";
	pary[2] = "horse";													
	pary[3] = "itger";
	pary[4] = "lion";

	for (i = 0; i < 5; i++)
	{
		printf("%s\n", pary[i]);
	}
	return 0;

}*/