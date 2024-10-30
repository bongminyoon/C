#include <stdio.h>

typedef struct {		//태그명 (자료형명)
	char no[6];
	char name[20];
	char dept[20];
	int salary;				//멤머들
	int sudang;
	float tax;
	double total;
} emp;

int main()
{
	emp emp1 = { "A2002", "제이홉", "영업부",3700000,150000 };
	emp emp2;

	emp1.tax = (emp1.salary + emp1.sudang) * 0.03;
	emp1.total = (emp1.salary + emp1.sudang) - emp1.tax;

	emp2 = emp1;

	printf("emp2 list \n\n");
	printf("%s, %s, %s, %d,%d, %.2lf, %.2lf \n\n", emp2.no, emp2.name, emp2.dept, emp2.salary, emp2.sudang, emp2.tax, emp2.total);

	return 0;
}