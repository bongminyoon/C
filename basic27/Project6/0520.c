//#include <stdio.h>
//
//int main(void)
//{
//	int ary[3];
//	int i;
//
//	*(ary + 0) = 10;
//	*(ary + 1) = *(ary + 0) + 10;
//
//	printf("�� ��° �迭 ��ҿ� Ű���� �Է� : ");
//	scanf("%d", ary + 2);
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("%5d", *(ary + i));
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int ary[3];				//�迭 ����
//	int* pa = ary;			//�����Ϳ� �迭�� ����
//	int i;					//�ݺ� ���� ����
//
//	*pa = 10;				//ù ��° �迭 ��ҿ� 10����
//	*(pa + 1) = 20;			//�� ��° �� ��ҿ� 20����
//	pa[2] = pa[0] + pa[1];	//���ȣ�� �Ἥ pa�� �迭�� ó�� ���
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("%5d", pa[i]);  //ary[i], *(pa++) �ص� ����
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int ary[5] = { 10,20,30,40,50 };
//	int* pa = ary;					//ù ��° �迭 ��� �ּ�
//	int* pb = pa + 3;				//�� ��° �迭 ��� �ּ�
//
//	printf("pa : %u\n", pa);		
//	printf("pb : %u\n", pb);		
//	pa++;							//pa������ �迭 ��ҷ� �̵�
//	printf("pb - pa : %u\n", pb - pa); //�� �������� ����
//
//	printf("�տ� �ִ� �迭 ����� �� ��� : ");
//	if (pa < pb) printf("%d\n", *pa);	//pa�� �迭 �տ������� *pa�� ���
//	else printf("%d\n", *pb);			//pb�� �迭 �տ������� *pb�� ���
//
//	return 0;
//}

//#include <stdio.h>
//
//void print_ary(int* pa/*, int size*/); //(int *) �� ����� �� �ִ�.
//
//int main(void)
//{
//	int ary[5] = { 10,20,30,40,50 };	//�Լ�����
//
//	print_ary(ary/*,sizeof(ary)/sizeof(ary[0])*/);				//�迭���� �ְ� �Լ� ȣ��
//
//	return 0;
//}
//
//void print_ary(int* pa/*,int size*/)			//�Ű������� ������ ����
//{
//	int i;
//	
//	for (i = 0; i < 5/*size*/; i++)
//	{
//		printf("%d ", pa[i]);	//pa�� �迭 ��� ǥ���� ���
//	}
//}

#include <stdio.h>

void print_ary(int* pa, int size); 

int main(void)
{
	//int ary1[5] = { 10,20,30,40,50 };	
	int ary2[7] = { 10,20,30,40,50,60,70 }; 

	print_ary(ary2, 5);  //sizeof(ary1)/ sizeof(ary1[1])
	printf("\n");
	print_ary(ary2, 7); //sizeof(ary2)/ sizeof(ary2[1])

	return 0;
}

void print_ary(int* pa, int size)			
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d ", pa[i]);	
	}
}