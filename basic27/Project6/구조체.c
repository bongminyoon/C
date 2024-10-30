#include <stdio.h>

int main()
{
	struct EMPLOYEE {		//태그명 (자료형명)
		char no[6];
		char name[20];
		char dept[20];
		int salary;				//멤머들
		int sudang;
		float tax;
		double total;
	} emp;//,emp2;		//구조체 정의(사용자 정의 자료형)

	//struct EMPLOYEE emp = { "A2001", "안재은", "인사부", 2700000, 150000 };
	//구조체 변수 초기화

	printf("사원 번호 : ");
	gets(emp.no);
	printf("이름 : ");
	gets(emp.name);
	printf("부서명 : ");
	gets(emp.dept);
	printf("월급 : ");
	scanf("%d", &emp.salary);
	printf("수당 : ");
	scanf("%d", &emp.sudang);

	emp.tax = (emp.salary + emp.sudang) * 0.03;
	emp.total = (emp.salary + emp.sudang) - emp.tax;
	
	printf("구조체의 크기 : %d, %d \n\n", sizeof(struct EMPLOYEE), sizeof(emp));



	printf("%s, %s, %s, %d, %d, %.2f, %.2f \n\n", emp.no, emp.name, emp.dept, emp.salary, emp.sudang, emp.tax, emp.total);
	// 구조체 멤버 연산자 변수.멤버명


	return 0;
}