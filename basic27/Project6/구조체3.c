#include <stdio.h>
#include <string.h>

struct EMPLOLEE {
	char no[6];
	char name[20];
	char dept[20];
	int salary;
	int sudang;
	float tax;
	double total;
};

void func1(struct EMPLOLEE tmp);
struct EMPLOLEE func2();

int main()
{
	struct EMPLOLEE emp1 = { "A1001","BTX","������",350000,170000 }, imsi;

	func1(emp1); //�Լ�ȣ��( ����ü ���� )

	imsi = func2(); //my ����ü imsi ����ü ������ ��ȯ

	printf("main()imsi ����ü \n");
	printf("%s, %s, %s, %d, %d, %.2lf, %.2lf \n\n", imsi.no, imsi.name, imsi.dept, imsi.salary, imsi.sudang, imsi.tax, imsi.total);

	return 0;
}

void func1(struct EMPLOLEE tmp)
{
	tmp.tax = (tmp.salary + tmp.sudang) * 0.03;
	tmp.total = (tmp.salary + tmp.sudang) - tmp.tax;

	printf("\nfunc1()tmp ����ü \n");
	printf("%s, %s, %s, %d, %d, %.2lf, %.2lf\n\n", tmp.no, tmp.name, tmp.dept, tmp.salary, tmp.sudang, tmp.tax, tmp.total);

}

struct EMPLOLEE func2()
{
	struct EMPLOLEE my;

	strcpy(my.no, "A 1003");
	strcpy(my.name, "����Ʈ");
	strcpy(my.dept, "�ؿܿ���");
	my.salary = 5200000;
	my.sudang = 3200000;

	my.tax = (my.salary + my.sudang) * 0.03;
	my.total = (my.salary + my.sudang) - my.tax;

	printf("\nfunc2() my ����ü\n");
	printf("%s, %s, %s, %d, %d, %.2lf, %.2lf\n\n", my.no, my.name, my.dept, my.salary, my.sudang, my.tax, my.total);

	return my;
}