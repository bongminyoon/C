#include <stdio.h>



int main(void)
{
	int score[3][4];
	int tot;
	double avg;
	int i, j;

	for (i = 0; i < 3; i++)
	{
		printf("�� ������ �����Է� : ");
		for (j = 0; j < 4; j++)
		{
			scanf("%d,", &score[i][j])
		}

	}
		for (i = 0; i < 3; i++)
		{
			tot = 0;
			for (j = 0; j < 4; j++)
			{
				tot = 0;
				for (j = 0; j < 4; j++)
				{
					tot += score[i][j];
				}
				avg = tot / 4.0;
				printf("���� : %d, ��� : %.2lf\n", tot, avg);

			}
			
		}
		return 0;
}
/*int* sum(int a, int b);
{
	int* p;

	p = sum(10, 20);
	printf("�� ������ �� : %d\n", *p);
	
	return 0;
}
int* sum(int a, int b)
{
	static int res;
	res = a + b;

	return &res;
}
/*
{
	int a = 10;

	add_ten(&a);
	printf("a : %d\n", a);

	return 0;

}
void add_ten(int* p)
{
	* p = *p + 10;
}



/* {
	int i;

	printf("auto ���� ������ ����� �Լ�...\n");
	for (i = 0; i < 3; i++)
	{
		auto_func();
	}
	printf("static ���� ������ ����� �Լ�..\n");
	for (i = 0; i < 3; i++)
	{
		static_func();
	}
	return 0;
}
void auto_func(void)
{
	auto int a = 0;

	a++;
	printf("%d\n", a);
}
void static_func(void)
{
	static int a;

	a++;
	printf("%d\n", a);
}

/* {
	auto int a = 0;

	assign();
	printf("main �Լ� a : %d\n", a);

	return 0;

}

void assign(void)
{
	auto int a;

	a = 10;
	printf("assign �Լ� a : %d\n", a);
}
/* {
	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("������ ���߿� ������ ���� �̸� : ");
	if (strcmp(str1, str2) > 0)
		printf("%s\n", str1);
	else
		printf("%s\n", str2);
	
	printf("���伭 3���� ���ڸ� ���ϸ�");
	
	if (strncmp(str1, str2, 3) == 0)
		printf("����.\n");
	else
		printf("�ٸ���,\n");

	return 0;

	
}
/*#include <string.h>

int main(void)
{
	char str[80] = "straw";
					
	strcat(str, "berry");
	printf("%s\n", str);
	strncat(str, "piece", 3);
	printf("%s\n", str);

	return 0;
}
/* {
	char str1[80], str2[80];
	char* resp;

	printf("2���� ���� �̸� �Է� : ");
	scanf("%s%s", str1, str2);
	if (strlen(str1) > strlen(str2))
		resp = str1;
	else
		resp = str2;
	printf("�̸��� ������� : %s\n",									resp);

	return 0;
}
/*char* my_strcpy(char* pd, char* ps);

int main(void)
{
	char str[80] = "strawberry";

	printf("�ٲٱ� �� ���ڿ� : %s\n", str);
	my_strcpy(str, "apple");
	printf("�ٲ� �� ���ڿ� : %s\n", str);
	printf("�ٸ� ���ڿ� ���� : %s\n", my_strcpy(str, "kiwi"));

	return 0;
}
char* my_strcpy(char* pd, char* ps)
{
	char* po = pd;
	while (*ps != '\0')
	{
		*pd = *ps;
		pd++;
		ps++;
	}
	*pd = '\0';

	return po; 
}

*/