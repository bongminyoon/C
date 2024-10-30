#include <stdio.h>

int main(void)
{
	int age = 0;
	int chest = 0;
	scanf("%d", &age);
	scanf("%d", &chest);

	if (age < 20)
	{
		if (chest < 85)
		{
			printf("나이가 %d세이고 사이즈는 S입니다.", age);
		}
		else if (85 <= chest && chest < 95)
		{
			printf("나이가 %d세이고 사이즈는 M입니다.", age);
		}
		else 
		{
			printf("나이가 %d세이고 사이즈는 L입니다.", age);
		}
		
	}
	else
	{
		if (chest < 85)
		{
			printf("나이가 %d세이고 사이즈는 S입니다.", age);
		}
		else if (85 <= chest && chest < 95)
		{
			printf("나이가 %d세이고 사이즈는 M입니다.", age);
		}
		else 
		{	
			printf("나이가 %d세이고 사이즈는 L입니다.", age);
		}
		
	}
	
	return 0;

}
