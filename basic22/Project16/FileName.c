#include<stdio.h>
#include<stdlib.h>
#include<string.h>
	
struct asd 
int main(void)
{
	
}


/*enum season { SPRING, SUMMER, FALL, WINTER };

int main(void)
{
	enum season ss;
	
	char* pc;
	ss = SPRING;
	switch (ss)
	{
	case SPRING:
		pc = "incline"; break;
	case SUMMER:
		pc = "swimming"; break;
	case FALL:
		pc = "trip"; break;
	case WINTER:
		pc = "skiing"; break;
	}
	printf("���� ���� Ȱ�� => %s\n", pc);

	return 0;
}
/*
union student
{
	int num;
	double grade;

};
int main(void)
{
	union student s1 = {315};
	printf("�й� : %d\n", s1.num);
	s1.grade = 4.4;
	printf("���� : %.1lf\n", s1.grade);
	printf("�й� : %d\n", s1.num);

	return 0;
}
/*struct list
{
	
	int num;
	
	struct list* next;

	
};


int main(void)
{
	struct list a = { 10,0 }, b = { 20,0 }, c = { 30,0 };
	struct list* head = &a, * current;
	a.next = &b;
	b.next = &c;
	printf("head -> num : %d\n", head->num);
	printf("head ->next -> num : %d\n", head->next->num);

	printf("list all : ");
	current = head;
	while (current != NULL)
	{
		printf("%d", current->num);
		current = current->next;

	}
	printf("\n");


	
	return 0;

	
	
}

/*
void print_list(struct address* lp)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%10s%5d%15s%20s\n", (lp + i)-> name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
		

	}
}
/*int main(void)
{
	struct score yuni = { 90, 80, 70 };
	struct score* ps = &yuni;

	printf("���� : %d\n", (*ps).kor);
	printf("���� : %d\n", ps -> eng);
	printf("���� : %d\n", ps-> mat);

	return 0;
}
/*struct vision exchange(struct vision);

int main(void)
{
	struct vision robot;

	printf("�÷� �̷� : ");
	scanf("%lf%lf", &(robot.left), &(robot.right));
	robot = exchange(robot);
	printf("�ٲ� �÷� : %.1lf, %.1lf\n", robot.left, robot.right);

	return 0;
}
struct vision exchange(struct vision robot)
{
	double temp;

	temp = robot.left;								
	robot.left = robot.right;
	robot.right = temp;

	return robot;
}

/*int main(void)
{
	struct student s1 = { 315, "ȫ�浿", 2.4 },
				   s2 = { 316, "�̼���", 3.7 },
				   s3 = { 317, "�������", 4.4 },
				   max;

	max = s1;
	if (s2.grade > max.grade)
		max = s2;
	if (s3.grade > max.grade)
		max = s3;

	printf("�й� : %d\n", max.id);
	printf("�̸� : %s\n", max.name);
	printf("���� : %.1lf\n", max.grade);

	return 0;
}
/*struct profile
{
	
	int age;
	double height;
	

};

struct student
{
	struct profile pf;
	int id;
	double grade;
};

int main(void)
{
	struct student yuni;
	yuni.pf.age = 17;
	yuni.pf.height = 164.5;
	yuni.id = 315;
	yuni.grade = 4.3;
	
	printf("���� : %d\n", yuni.pf.age);
	printf("Ű : %.1lf\n", yuni.pf.height);
	printf("�й� : %d\n", yuni.id);
	printf("���� : %.1lf\n", yuni.grade);

	return 0;
	
}
/* {
	struct profile yuni;

	strcpy(yuni.name, "������");
	yuni.age = 17;
	yuni.height = 164.5;

	yuni.intro = (char*)malloc(80);
	printf("�ڱ� �Ұ� : ");
	gets(yuni.intro);

	printf("�̸� : %s\n", yuni.name);
	printf("���� : %d\n", yuni.age);
	printf("Ű : %.1lf\n", yuni.height);
	printf("�ڤӼҰ� : %s\n", yuni.intro);
	free(yuni.intro);

	return 0;
}*/