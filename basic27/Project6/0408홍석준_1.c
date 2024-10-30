#include <stdio.h>

int main()
{
	int i, j, k;
	k = 0;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j <= k; j++) 
		{
			printf("*");
		}
		k++;
		printf("\n");
	}

	return 0;
}