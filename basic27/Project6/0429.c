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
//	printf("��� : %1.f\n", avg);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char str[80] = "applejam";
//
//	printf("���� ���ڿ� : %s\n", str);
//	printf("���ڿ� �Է� : ");
//	scanf("%s", str);
//	printf("�Է� �� ���ڿ� : %s\n", str);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char str[80];
//
//	printf("���ڿ� �Է� :");
//	gets(str);
//	puts("�Էµ� ���ڿ� : ");
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
//	printf("�����ͷ� a�� ��� : %d\n", *pa);
//	printf("���������� a�� ��� : %d\n", a);
//
//	return 0;
//}