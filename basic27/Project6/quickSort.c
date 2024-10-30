#include <stdio.h>
int i = 0;
int partition(int a[], int begin, int end, int size) {
	int pivot, l, r, t, temp;
	l = begin;
	r = end;
	pivot = (begin + end) / 2;
	printf("\n [%d´Ü°è : pivot = %d ] \n",++i, a[pivot]);
	while (l < r) {
		while ((a[l] < a[pivot]) && (l < r)) l++;
		while ((a[r]) >= a[pivot] && (l < r)) r--;
		if (l < r) {
			temp = a[l];
			a[l] = a[r];
			a[r] = temp;
			if (l == pivot) pivot = r;
		}
	}
	temp = a[pivot];
	a[pivot] = a[r];
	a[r] = temp;
	for (t = 0; t < size; t++)	printf("%4d", a[t]);
	printf("\n");
	return r;
}

void quickSort(int a[], int begin, int end, int size) {
	int p;
	if (begin < end) {
		p = partition(a, begin, end, size);
		quickSort(a, begin, p - 1, size);
		quickSort(a, p + 1, end, size);
	}
}