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
			printf("���̰� %d���̰� ������� S�Դϴ�.", age);
		}
		else if (85 <= chest && chest < 95)
		{
			printf("���̰� %d���̰� ������� M�Դϴ�.", age);
		}
		else 
		{
			printf("���̰� %d���̰� ������� L�Դϴ�.", age);
		}
		
	}
	else
	{
		if (chest < 85)
		{
			printf("���̰� %d���̰� ������� S�Դϴ�.", age);
		}
		else if (85 <= chest && chest < 95)
		{
			printf("���̰� %d���̰� ������� M�Դϴ�.", age);
		}
		else 
		{	
			printf("���̰� %d���̰� ������� L�Դϴ�.", age);
		}
		
	}
	
	return 0;

}
