#include <stdio.h>
#include "bubble.h"

int main(void) {
	int i, list[8] = { 69,10,30,2,16,8,31,22 };
	int size = sizeof(list) / sizeof(list[0]);
	printf("\n정렬할 원소 : ");
	for (i = 0; i < size; i++)	printf("%d ", list[i]);
	printf("\n\n<<<<<<<<<<버블 정렬 수행>>>>>>>>>>\n");
	bubble(list, size);
}

void bubble(int a[], int size)
{
	int i, j, t, temp;

	for (i = size - 1; i > 0; i--) {
		printf("\n %d단계>>", size - i);
		for (j = 0; j < i; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
			printf("\n\t");
			for (t = 0; t < size; t++)	printf("%3d ", a[t]);
		}
	}
}