//#include<stdio.h>
//
//void print_line(void); //�Լ�����
//
//int main(void)
//{
//	print_line();	//�Լ� ȣ��
//	printf("�й�    �̸�    ����    ����\n");
//	print_line();	//�Լ� ȣ��
//
//	return 0;
//}
//
//void print_line(void)
//{
//	int i;
//
//	for (i = 0; i < 50; i++) //50�� �ݺ��Ͽ� '-' ���
//	{
//		printf("-");
//	}
//	printf("\n");
//}

//#include <stdio.h>
//
//void fruit(void); //�Լ� ����
//
//int main(void)
//{
//	fruit();	//�Լ� ȣ��
//
//	return 0;
//}
//
//
//void fruit(void)	//���ȣ�� �Լ� ����
//{
//	printf("apple\n");	
//	fruit();	//�ڽ��� �ٽ� ȣ��
//}

//#include <stdio.h>
//
//void fruit(int n);
//
//int main(void)
//{
//
//	fruit(1);	//ó�� ȣ���ϹǷ� 1�� �μ��� ��
//
//	return 0;
//}
//
//void fruit(int n)	//ȣ��Ƚ���� �Ű������� ����
//{
//	printf("apple\n");
//	if (n == 3) return;	//ȣ��Ƚ���� 3���̸� ��ȯ�ϰ� ��
//	fruit(n + 1);	//��ȣ�� �� �� ȣ��Ƚ���� 1����
//}

//#include <stdio.h>
//
//void fruit(int n);
//
//int main(void)
//{
//	fruit(1);
//
//	return 0;
//}
//
//void fruit(int n)
//{
//	printf("apple\n");
//	if (n == 3)return;
//	fruit(n + 1);
//	printf("jam\n");
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int ary[5]; //int�� ��� 5�� �迭 ����
//
//	ary[0] = 10;
//	ary[1] = 20;
//	ary[2] = ary[0] + ary[1];
//	scanf("%d", &ary[3]);
//
//	printf("%d\n", ary[2]);
//	printf("%d\n", ary[3]);
//	printf("%d\n", ary[4]);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int ary1[5] = { 1,2,3,4,5 };
//	int ary2[5] = { 1,2,3 };
//	int ary3[] = { 1,2,3 };
//	double ary4[5] = { 1.0,2.1,3.2,4.3,5.4 };
//	char ary5[5] = { 'a','p','p','l','e' };
//
//	ary1[0] = 10;
//	ary1[1] = 20;
//	ary1[2] = 30;
//	ary1[3] = 40;
//	ary1[4] = 50;
//
//	return 0;
//}

#include <stdio.h>

int main(void)
{
	int score[5];
	int i;
	int tot = 0;
	double avg;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]);
	}

	for (i = 0; i < 5; i++)
	{
		tot += score[i];
	}
	avg = tot / 5.0;

	for (i = 0; i < 5; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("��� : %.1lf\n", avg);

	return 0;
}
