#include <stdio.h>

int get_pos(void);


int main(void)
{
	
	int res;

	res = get_pos();
	
	printf("반환값 : %d\n", res);

	
	return 0;
}

int get_pos(void)
{
	int pos;

	printf("양수입력 : " );
	scanf("%d", &pos);
	return pos;
}


























