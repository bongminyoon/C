
/*#include <stdio.h>

int main(void)
{	
	
	int cnt = 0;
	int k = 0;
	int j = 0;
	int i = 0;
	
	for (i = 0; i < 5; i++);
	{
		for (j = 1; j < 101; j++);
		{
			for (j = 1; j <= i; j++);
			{
				if (i % k == 0);
				{
					cnt++;
					printf("%d", i);
				}
			}
		}
	}
	return 0;

}
for (j = 0; j < 5; j++)
{
}
*/

/*

#include <stdio.h>

int main(void)
{

	int cnt = 0;
	int k = 0;
	int j = 0;
	int i = 0;

	for (i = 2; i <= 100; i++) 
	{
		int is_prime = 1;

		// i�� 2���� i�� �����ٱ����� ���ڷ� ������������ �˻�
		for (j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				is_prime = 0; // �Ҽ��� �ƴ�
				break;
			}
		}

		if (is_prime) {
			printf("%d ", i); // �Ҽ� ���
			cnt++;
		}
	}

	printf("\n�� �Ҽ��� ����: %d\n", cnt);

	return 0;
}*/