/*
#include<stdio.h>
//함수의 기본형태


int main(void)
{
	int a = 10, b = 20;
	int res;
	res = add(a, b); //호출
	printf("reuslt : %d\n", res);
	

	return 0;
}
*/

/*#include<stdio.h>

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
	
	printf("양수 입력 : ");
	scanf("%d", &pos);

	return pos;
}*/
/*
#include<stdio.h>

void print_char(char ch, int cnt);

int main(void)
{
	print_char('@', 5);

	return 0;
}

void print_char(char ch, int cnt)
{
	int i;
	for (i = 0; i < cnt; i++)
	{
		printf("%c", ch);
	}

}*/
/*
#include<stdio.h>

void print_line(void);

int main(void)
{
	print_line();
	printf("학번		이름		전공		학점\n");
	print_line();

	return 0;

}
void print_line(void)
{
	int i;

	for(i = 0; i < 50; i++)
	{
		printf("-");
	}
	printf("\n");
}
*/
/*
#include<stdio.h>

void fruit(void);

int main(void)
{
	fruit();

	return 0;
}

void fruit(void)
{
	printf("apple\n");
	fruit();
}*/
/*
#include<stdio.h>

void fruit(void);

int main(int n)
{
	fruit(1);

	return 0;
}
void fruit(int n)
{
	printf("apple\n");
	if(n == 3) return;
	fruit(n + 1);
} */
/*
#include <stdio.h>

void fruit(int n);

int main(void)
{
	fruit(1);

	return 0;
}
void fruit(int n)
{
	printf("apple\n");
	if (n == 3) return;
	fruit(n + 1);
	printf("jam\n");
}*/

#include<stdio.h>

int main(void)
{
	int ary[5];

	ary[0] = 10;
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];
	scanf("%d", &ary[3]);

	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]);

	return 0;
}