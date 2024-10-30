#include <stdio.h>

int main(void)
{
	int age;
	int chest;

	scanf("%d", &age);
	scanf("%d", &chest);

	if (age < 20)
	{
		if (chest < 85)
		{
			printf("나이가 %d세이고 사이즈는 S입니다", age);
		}
		else if (chest >= 85 && chest < 95)
		{
			printf("나이가 %d세이고 사이즈는 M입니다", age);
		}
		else
		{
			printf("나이가 %d세이고 사이즈는 L입니다", age);
		}
	}
	else
	{
		if (chest < 90)
		{
			printf("나이가 %d세이고 사이즈는 S입니다", age);
		}
		else if (chest >= 90 && 100 > chest)
		{
			printf("나이가 %d세이고 사이즈는 M입니다", age);
		}
		else
		{
			printf("나이가 %d세이고 사이즈는 L입니다", age);
		}
	}
	return 0;
}