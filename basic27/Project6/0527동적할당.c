//#include <stdio.h>
//#include <stdlib.h>		//malloc, free �Լ� ����� ���� �������
//
//int main(void)
//{
//	int* pi;			//���� �Ҵ� ������ ������ ������ ����
//	double* pd;
//
//	pi = (int*)malloc(sizeof(int));	//�޸� ���� �Ҵ� �� ������ ����
//	if (pi == NULL)					//���� �Ҵ翡 �����ϸ� null ������ ��ȯ
//	{
//		printf("#���� �޸𸮰� �����մϴ�.\n");
//		exit(1);	//���α׷� ����
//	} //���� ó�� �ϴ°�
//	pd = (double*)malloc(100);
//
//	*pi = 10;		//�����ͷ� ���� �Ҵ� ���� ���
//	*pd = 3.4;
//
//	printf("���������� ��� : %d\n", *pi);
//	printf("�Ǽ������� ��� : %lf\n", *pd);
//
//	free(pi);		//���� �Ҵ� ���� ��ȯ
//	free(pd);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int* pi;
//	int i, sum = 0;
//
//	pi = (int*)malloc(5 * sizeof(int));
//	if (pi == NULL)
//	{
//		printf("�޸𸮰� �����մϴ�\n");
//		exit(1);
//	}
//	printf("5���� ���̸� �Է��ϼ��� : ");
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &pi[i]);
//		sum += pi[i];
//	}
//	printf("5���� ��� ���� : %.1lf\n", (sum / 5.0));
//	printf("%d", _msize(pi));
//	free(pi);
//
//	return 0;
//}


