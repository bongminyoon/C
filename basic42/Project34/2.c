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
			printf("���̰� %d���̰� ������� s�Դϴ�", age);

		}
		else if(chest >= 85 && chest < 95)
		{
			printf("���̰� %d���̰� ������� m�Դϴ�", age);
		}
		else
		{
			printf("���̰� %d���̰� ������� L�Դϴ�", age);
		}
			
	}
	else
	{
		if (chest < 90)
		{
			printf("���̰� %d���̰� ������� s�Դϴ�", age);
		}
		else if (chest >= 90 && chest < 100)
		{
			printf("���̰� %d���̰� ������� m�Դϴ�", age);
		}
		else
		{
			printf("���̰� %d���̰� ������� L�Դϴ�", age);
		}
	}
	return 0;
}