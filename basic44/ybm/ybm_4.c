#include <stdio.h>

double find_max(double* pa, int size);

int main(void)
{
	double ary[] = { 2.5, 3.1, 5.5, 7.1, 4.6, 9.9, 1.5 };
	int size = sizeof(ary) / sizeof(ary[0]);
	double max = find_max(ary, size);
	printf("�迭�� �ִ밪: %.1lf", max);
	
	return 0;
}
double find_max(double* pa, int size)
{
	int i;
	double max = pa[0];
	for (i = 1; i < size; i++)
	{
		if (max < pa[i])
		{
			max = pa[i];
		}
	}
	return max;
}