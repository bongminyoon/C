#include <stdio.h>

int prime_check(int n);

int main(void)
{
	int j;
	int a;
	scanf("%d", &a);
	for (j = 1; j < a; j++)
	{
		if (prime_check(a)) // return 1 
		{
			printf("%d", a);
		}
	}


	return 0;
}




int prime_check(int n)
{
	int i;
	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			return 0; //소수가 아닌것
		}
		
	}

	return 1;

}