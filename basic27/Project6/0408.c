#include <stdio.h>

int main()
{
	int total = 0;
	//total = add(10, 20);
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			total = j * i;
			printf("%d * %d : %d \n", i, j, total);
		}
		printf("-------------------------\n");
		/*total = 2 * i;
		printf("2 *%d = %d\n", i, total);*/
	}
	return 0;
}

//int add(int a, int b) //f10 f11 해서 디버깅 하는법
//{
//	return a + b;
//}