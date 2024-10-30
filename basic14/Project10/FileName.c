
/*#include<stdio.h>

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
	//{
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

#include<stdio.h>

int main(void)
{
	int score[5];
	int i;
	int tot = 0;
	double avg;
	int cnt;

	cnt = sizeof(score) / sizeof(score[0]);

	for (i = 0; i < cnt; i++)
	{
		scanf("%d", &score[i]);
	}
		for (i = 0; i < cnt; i++)
		{
			tot += score[i];
		}
		avg = tot / (double)cnt;
	
		for (i = 0; i < cnt; i++)
		{
			printf("%5d", score[i]);
		}
		printf("\n");

		printf("평균 : %.1lf\n", avg);

		return 0;
	}
}
#include<stdio.h>

int main(void)
{
	char str[80] = "applejam";

	printf("최초 문자열 : %s\n", str);
	printf("문자열 입력 : ");
	scanf("%s", str);
	printf("입력 후 문자열 : %s\n", str);

	return 0;
}
#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[80] = "Cat";
	char str2[80];

	strcpy(str1, "tiger");
	strcpy(str2, str1);
	printf("%s, %s\n", str1, str2);

	return 0;
}*/

/*#include<stdio.h>

int main(void)
{
	char str[80];

	printf("문자열 입력 : ");
	gets(str); //scanf("%s", str);
	puts("입력된 문자열 : ");
	puts(str); //printf("%s", str);

	return 0;
}*/