#include <stdio.h>

void swap(int* pa, int* pb);


int main(void)
{
	int a = 20;
	int b = 30;
	swap(&a, &b);
	printf("%d,%d", a, b);

	return 0;
}
void swap(int* pa, int* pb)
{
	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;

}