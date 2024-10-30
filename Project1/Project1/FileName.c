//

//#include <stdio.h>

//int main(void)
//{
//	int a = 20, b = 3;
//	double res;	
//
//	res = ((double)a) / ((double)b);
//	printf("a = %d, b = %d\n", a, b);
//	printf("a / b의 결과 %.1lf\n", res);
//	
//	a = (int)res;
//	printf("(int) %.1lf의 결과 %d\n", res, a);
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
//	printf("int형 변수의 크기 : %d\n", sizeof (&a));
//	printf("double형 변수의 크기 : %d\n", sizeof(&b));
//	printf("정수형 상수의 크기 :%d\n", sizeof(10));
//	printf("수시긔 결과값의 크기 : %d\n", sizeof(1.5 + 3.4));
//	printf("char 자료형의 크기 : %d\n", sizeof(char));
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
//	printf("큰 값 : %d\n", res);
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
