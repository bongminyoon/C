#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int k;
	for (i = 0; i < 3; i++)
	{
		for (j = 5; j > (i * 2) + 1; j--)
		{
			printf(" ");
		}
		for (k = 0; k < (i * 2) + 1; k++)
		{
			printf("*");

		}
		printf("\n");
	}
	return 0;
}