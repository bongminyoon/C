/*#include <stdio.h>

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
}*/

//q
#include <stdio.h>

//int main(void)
//{
//	int ary[5];
//	int a  =10;
//	for (int i = 0; i < 5; i++)
//	{
//	scanf("%d", ary + i);
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%5d", ary[i]);
//	}
//
//	return 0;
//}

	/*ary[0] == *(ary + 0)
	ary[1] == *(ary + 1)
	ary[2] == *(ary + 2)

	&ary[0] == ary + 0
	&ary[1] == ary + 1
	&ary[2] == ary + 2*/

//#include <stdio.h>
//
//int main(void)
//{
//	int ary1[5] = { 1,2,3,4,5 };
//	int ary2[5] = { 1,2,3 };
//	int ary3[] = { 1,2,3 };
//	double ary4[5] = { 1.0, 2.1, 3.2, 4.3, 5.4 };
//	char ary5[5] = { 'a','p', 'p', 'l', 'e' }; //XX
//	char ary6[5] = "apple"; //널문자가 없어서 오류
//					// *널문자 포함*
//	printf("%s\n", ary5);
//	printf("%s\n", ary6);
//
//
//	ary1[0] = 10;
//	ary1[1] = 20;
//	ary1[2] = 30;
//	ary1[3] = 40;
//	ary1[4] = 50;
//
//	return 0;
//
//}
#include <stdio.h>

int main(void)
{
	int ary[100];

	ary[0] = 10;
	printf("%s\n", ary5);
	printf("%s\n", ary6);


	ary1[0] = 10;
	ary1[1] = 20;
	ary1[2] = 30;
	ary1[3] = 40;
	ary1[4] = 50;

	return 0;

}