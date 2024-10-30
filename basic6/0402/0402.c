//#include <stdio.h>
//
//int main(void)
//{
//	int a = 1;
//
//	do
//	{
//		a = a * 2;
//	} while (a < 10);
//	printf("a : %d\n", a);
//
//	return 0;
//}

//#include <stdio.h>
//	
//int main(void)
//{
//	int i, j, k;
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (k = 0; k < 2; k++)
//	{
//		printf("*");	
//	}
//	printf("\n");
//	
//	
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int i, j;
//
//	for (i = 1; i <= 5; i++) 
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main(void)
//{
//	int i, j;
//
//	for (i = 5; i > 0; i--)	
//	{
//		for (j = 0; j < i; j++)
//		{          
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	for (int i = 5; i > 0; 1--)
//	{
//		for (int j = 0; j < 1; 1++)
//		{ 
//			printf("*");
//		}
//		printf("\n");
//
//	return 0;
//}

#include <stdio.h>

int main(void)
{
	for (int i = 4; i > 0; i--)
	{
		for (int j = 0; j < i; 1++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
