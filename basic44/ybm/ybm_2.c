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
			printf("���̰� %d���̰� ������� S�Դϴ�", age);
		}
		else if (chest >= 85 && chest < 95)
		{
			printf("���̰� %d���̰� ������� M�Դϴ�", age);
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
			printf("���̰� %d���̰� ������� S�Դϴ�", age);
		}
		else if (chest >= 90 && 100 > chest)
		{
			printf("���̰� %d���̰� ������� M�Դϴ�", age);
		}
		else
		{
			printf("���̰� %d���̰� ������� L�Դϴ�", age);
		}
	}
	return 0;
}