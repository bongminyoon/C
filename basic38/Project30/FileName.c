#include <stdio.h>

int main(void)

{
	int k;
	int j;
	int i;
	for (i = 0; i < 3; i++)
	{
		for (j = 5; j > i+1; j--)
		{
			printf("v");
			
		}
		
		for (k = 0; k < i + 1; k++)
		{
			printf("*");
		}
		printf("\n");
		
	}
		
}