//

//#include <stdio.h>

//int main(void)
//{
//	int a = 20, b = 3;
//	double res;	
//
//	res = ((double)a) / ((double)b);
//	printf("a = %d, b = %d\n", a, b);
//	printf("a / b�� ��� %.1lf\n", res);
//	
//	a = (int)res;
//	printf("(int) %.1lf�� ��� %d\n", res, a);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10;
//	double b = 3.4;
//
//	printf("int�� ������ ũ�� : %d\n", sizeof (&a));
//	printf("double�� ������ ũ�� : %d\n", sizeof(&b));
//	printf("������ ����� ũ�� :%d\n", sizeof(10));
//	printf("���ñ� ������� ũ�� : %d\n", sizeof(1.5 + 3.4));
//	printf("char �ڷ����� ũ�� : %d\n", sizeof(char));
//
//	return 0;
//
//
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10, b = 20, res;
//
//	res = (a > b) ? a : b;
//
//	printf("ū �� : %d\n", res);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	unsigned int a = 10;
//	int b = 12;
//
//	printf("a & b : %d\n", a & b);
//	printf("a ^ b : %d\n", a ^ b);
//	printf("a | b : %d\n", a | b);
//	printf("~a : %u\n", ~a);
//	printf("a << 1 : %d\n", a << 1);
//	printf("a >> 1 : %d\n", a >> 2);
//
//	return 0;
//}

#include <stdio.h>

int main(void)
{
	int a = 20;
	int b = 0;

	if (a > 10)
	{
		b = a;
	}

	printf("a : %d, b : %d\n", a, b);
	
	return 0;
}
