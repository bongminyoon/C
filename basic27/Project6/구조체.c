#include <stdio.h>

int main()
{
	struct EMPLOYEE {		//�±׸� (�ڷ�����)
		char no[6];
		char name[20];
		char dept[20];
		int salary;				//��ӵ�
		int sudang;
		float tax;
		double total;
	} emp;//,emp2;		//����ü ����(����� ���� �ڷ���)

	//struct EMPLOYEE emp = { "A2001", "������", "�λ��", 2700000, 150000 };
	//����ü ���� �ʱ�ȭ

	printf("��� ��ȣ : ");
	gets(emp.no);
	printf("�̸� : ");
	gets(emp.name);
	printf("�μ��� : ");
	gets(emp.dept);
	printf("���� : ");
	scanf("%d", &emp.salary);
	printf("���� : ");
	scanf("%d", &emp.sudang);

	emp.tax = (emp.salary + emp.sudang) * 0.03;
	emp.total = (emp.salary + emp.sudang) - emp.tax;
	
	printf("����ü�� ũ�� : %d, %d \n\n", sizeof(struct EMPLOYEE), sizeof(emp));



	printf("%s, %s, %s, %d, %d, %.2f, %.2f \n\n", emp.no, emp.name, emp.dept, emp.salary, emp.sudang, emp.tax, emp.total);
	// ����ü ��� ������ ����.�����


	return 0;
}