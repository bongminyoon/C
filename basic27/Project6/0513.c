//#include <stdio.h>
//
//int main()
//{
//	int a = 10, b = 15, tot;	//���� ����� �ʱ�ȭ
//	double avg;					//����� ������ ����
//	int* pa, *pb;				//������ ���� ����
//	int* pt = &tot;				//������ ����� �ʱ�ȭ
//	double* pg = &avg;			//�Ǽ��� ������ ����� �ʱ�ȭ
//
//	pa = &a;					//������ pa�� ���� a�� �ּ� ����
//	pb = &b;					//������ pb�� ���� b�� �ּ� ����
//
//	*pt = *pa + *pb;			//a���� b���� ���� tot�� ����
//	*pg = *pt / 2.0;			//tot���� 2�� ���� ���� avg�� ����
//
//	printf("�� ������ �� : %d, %d\n", *pa, *pb);	//a���� b�����
//	printf("�� ������ �� : %d\n", *pt);			//tot�� ���
//	printf("�� ������ ��� : %.1lf\n", *pg);		//avg�� ���
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 10, b = 20;
//	const int* pa = &a; //������ pa�� ���� a�� ����Ų��.
//	int* const pb = &b; //pb�� �ٸ� ������ �ּҸ� ����ų�� ����
//
//	//*pa = 30; const ����
//	//pb = &a ; const ����
//
//	
//	printf("���� a�� : %d\n", *pa);	//�����͸� ���������Ͽ� a���
//	pa = &b;						//�����Ͱ� ���� b�� ����Ű�� �Ѵ�.
//	printf("���� b�� : %d\n", *pa);	//�����͸� ���������Ͽ� b�� ���
//	a = 20;							//a�� ���� �����Ͽ� ���� �ٲ۴�
//	printf("���� a�� : %d\n", *pa);	//�����ͷ� ���������Ͽ� �ٲﰪ ���
//	
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char ch;
//	int in;
//	double db;
//
//	char* pc = &ch;
//	int* pi = &in;
//	double* pd = &db;
//
//	printf("char�� ������ �ּ� ũ�� : %d\n", sizeof(&ch));
//	printf("int�� ������ �ּ� ũ�� : %d\n", sizeof(&in));
//	printf("double�� ������ �ּ� ũ�� : %d\n", sizeof(&db));
//
//	printf("char * �������� ũ�� : %d\n", sizeof(pc));
//	printf("int * �������� ũ�� : %d\n", sizeof(pi));
//	printf("double * �������� ũ�� : %d\n", sizeof(pd));
//
//	printf("char * �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pc));
//	printf("int * �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pi));
//	printf("double * �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pd));
//
//	return 0;
//}

#include <stdio.h>

void swap(int* pa, int* pd); // �� ������ ���� �ٲٴ� �Լ��� ����

int main()
{
	int a = 10, b = 20;		//���� ����� �ʱ�ȭ

	swap(&a, &b);			//a,b�� �ּҸ� �μ��� �ְ� �Լ� ȣ��
	printf("a:%d, b: %d", a, b); //���� a,b ���

	return 0;
}

void swap(int* pa, int* pb)	//�Ű������� ������ ����
{
	int temp;				//��ȯ�� ���� �ӽ� ����

	temp = *pa;				//temp�� pa�� ����Ű�� ������ �� ����
	*pa = *pb;				//pa�� ����Ű�� ������ pb�� ����Ű�� ������ �� ����
	*pb = temp;				//pb�� ����Ű�� ������ temp�� ����
}