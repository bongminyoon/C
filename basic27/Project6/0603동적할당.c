//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* pi;		//�Ҵ��� ��������� ������ ������
//	int size = 5;	//�� ���� �Ҵ��� ��������� ũ��, int�� ���� 5�� ��
//	int cnt = 0;	//���� �Էµ� ����� ����
//	int num;		//����� �Է��� ����
//	int i;			//�ݺ� ���� ����
//
//	pi = (int*)calloc(size, sizeof(int));	//���� 5���� ���� ���� �Ҵ�
//	while (1)
//	{
//		printf("����� �Է��ϼ��� =>");
//		scanf("%d", &num);			//������ �Է�
//		if (num <= 0)break;			//0�Ǵ� �����̸� ����
//		if (cnt < size)				//���� ������ ���� ������
//		{
//			pi[cnt ++] = num;
//		}
//		else						//��������� �����ϸ�
//		{
//			size += 5;				//ũ�⸦ �÷��� ���Ҵ�
//			pi = (int*)realloc(pi, size * sizeof(int));
//			pi[cnt++] = num;		//���Ҵ��� ������ �� ����
//		}
//	}
//
//	for (i = 0; i < cnt; i++)
//	{
//		printf("%5d", pi[i]);	//�Է� ������ ���
//	}
//	free(pi);			//�����Ҵ� ������� �ݳ�
//
//	return 0;
//}


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char temp[80];
	char* str[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("���ڿ��� �Է��ϼ��� :");
		gets(temp);
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
	}

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]);
	}

	for (i = 0; i < 3; i++)
	{
		free(str[i]);
	}

	return 0;
}