//#include <stdio.h>
//#include "add.h"
//int add(int x, int y);	//add �Լ� ����

//int main(void)	//���� �Լ� ����
//{
//	int a = 10, b = 20;
//	int res;
//
//	res = add(a, b);	//add �Լ� ȣ��
//	printf("result : %d\n", res);
//
//	return 0;	
//}				//main �Լ��� ��
//int add(int x, int y)	//add �Լ� ���� ����
//{
//	int temp;	//�� ������ ���� ��� ������ ����
//
//	temp = x + y;	//x�� y�� ���� temp�� ����
//
//	return temp;	//temp�� ���� ��ȯ
//}				//add �Լ��� ��
//15����� 22���� �ּ� ���� ���ص� ��.

//�Ű������� ���� �Լ� ����

//#include <stdio.h>
//
//int get_pos(void);
//
//int main()
//{
//	int res;
//
//	res = get_pos();
//	printf("��ȯ�� : %d\n", res);
//	return 0;
//}
//
//int get_pos(void)
//{
//	int pos;
//
//	printf("��� �Է� :");
//	scanf("%d", &pos);
//	
//	return pos;
//}

//��ȯ���� ���� �Լ�

#include <stdio.h>

void print_char(char ch, int cnt); //�Լ�����

int main()
{
	print_char('@', 5);	//���ڿ� ���ڸ� �ְ� �Լ� ȣ��

	return 0;
}

void print_char(char ch, int cnt) //�Ű������� ������ ��ȯ���� ����
{
	int i;

	if (cnt > 10)return; //���⼭ return�ϸ� �Լ��� ������ ������
	for (i = 0; i < cnt; i++)
	{
		printf("%c", ch);//�Ű����� ch�� ���� ���� ���
	}
}