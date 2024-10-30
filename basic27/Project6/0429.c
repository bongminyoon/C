//#include <stdio.h>
//
//int main(void)
//{
//	int score[5];
//	int i;
//	int tot = 0;
//	double avg;
//	int cnt;
//
//	cnt = sizeof(score) / sizeof(score[0]);
//
//	for (i = 0; i < cnt; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//
//	for (i = 0; i < cnt; i++)
//	{
//		tot += score[i];
//	}
//	avg = tot / (double)cnt;
//
//	for (i = 0; i < cnt; i++)
//	{
//		printf("%5d", score[i]);
//	}
//	printf("\n");
//
//	printf("평균 : %1.f\n", avg);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char str[80] = "applejam";
//
//	printf("최초 문자열 : %s\n", str);
//	printf("문자열 입력 : ");
//	scanf("%s", str);
//	printf("입력 후 문자열 : %s\n", str);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char str[80];
//
//	printf("문자열 입력 :");
//	gets(str);
//	puts("입력된 문자열 : ");
//	puts(str);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a;
//	int* pa;
//	
//	pa = &a;
//	*pa = 10;
//
//	printf("포인터로 a값 출력 : %d\n", *pa);
//	printf("변수명으로 a값 출력 : %d\n", a);
//
//	return 0;
//}