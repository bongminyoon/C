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
	struct EMPLOLEE emp1 = { "A1001","BTX","정보부",350000,170000 }, imsi;

	func1(emp1); //함수호출( 구조체 전달 )

	imsi = func2(); //my 구조체 imsi 구조체 변수에 반환

	printf("main()imsi 구조체 \n");
	printf("%s, %s, %s, %d, %d, %.2lf, %.2lf \n\n", imsi.no, imsi.name, imsi.dept, imsi.salary, imsi.sudang, imsi.tax, imsi.total);

	return 0;
}

void func1(struct EMPLOLEE tmp)
{
	tmp.tax = (tmp.salary + tmp.sudang) * 0.03;
	tmp.total = (tmp.salary + tmp.sudang) - tmp.tax;

	printf("\nfunc1()tmp 구조체 \n");
	printf("%s, %s, %s, %d, %d, %.2lf, %.2lf\n\n", tmp.no, tmp.name, tmp.dept, tmp.salary, tmp.sudang, tmp.tax, tmp.total);

}

struct EMPLOLEE func2()
{
	struct EMPLOLEE my;

	strcpy(my.no, "A 1003");
	strcpy(my.name, "빅히트");
	strcpy(my.dept, "해외영업");
	my.salary = 5200000;
	my.sudang = 3200000;

	my.tax = (my.salary + my.sudang) * 0.03;
	my.total = (my.salary + my.sudang) - my.tax;

	printf("\nfunc2() my 구조체\n");
	printf("%s, %s, %s, %d, %d, %.2lf, %.2lf\n\n", my.no, my.name, my.dept, my.salary, my.sudang, my.tax, my.total);

	return my;
}