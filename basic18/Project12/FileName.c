#include <stdio.h>

char *my_strcpy(char* pd, char* ps);

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
/*#include <string.h>

int main(void)
{
	char str1[80] = "strawberry";
	char str2[80] = "apple";
	char* ps1 = "banana";
	char* ps2 = str2;

	printf("���� ���ڿ� : %s\n", str1);
	strcpy(str1, str2);
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, ps1);
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, ps2);
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, "banana");
	printf("�ٲ� ���ڿ� : %s\n", str1);

	return 0;

}
/* {
	char str[80] = "apple juice";
	char* ps = "banana";

	puts(str);
	fputs(ps, stdout);
	puts("milk");

	return 0;
}
/* {
	char str[80];

	printf("������ ���Ե� ���ڿ� �Է� : ");
	fgets(str, sizeof(str), stdin);
	printf("�Էµ� ���ڿ��� %s�Դϴ�\n", str);

	return 0;
}
/*
{
	char str[80];

	printf("������ ���Ե� ���ڿ� �Է� : ");
	gets(str);
	printf("�Է��� ���ڿ��� %s �Դϴ�", str);

	return 0;
}
/* {
	char str[80];

	printf("���ڿ� �Է� : ");
	scanf("%s", str);
	printf("ù ���� �ܾ� : %s\n", str);
	scanf("%s", str);
	printf("���ۿ� ���� �ִ� �� ��° �ܾ� : %s\n", str);

	return 0;
}
/*void my_gets(char* str, int size);

int main(void)
{
	char str[7];

	my_gets(str, sizeof(str));
	printf("�Է��� ���ڿ� :  %s\n", str);

	return 0;
}

void my_gets(char* str, int size)
{
	char ch;
	int i = 0;

	ch = getchar();
	while ((ch != '\n') && (i < size - 1))
	{
		str[i] = ch;
		i++;
		ch = getchar();
	}
	str[i] = '\0';
}
/*
{
	int res;
	char ch;

	while (1)
	{
		res = scanf("%c", &ch);
		if (res == -1) break;
		printf("%d", ch);
	}

	return 0;
}
 {
	char ch;
	int i;

	for (i = 0; i < 3; i++) 
	{
		scanf("%c", &ch);
		printf("%c", ch);

	}

	return 0;
}
 {
	int ch;

	ch = getchar();
	printf(" �Է��� ���� : ");
	putchar(ch);
	putchar('\n');

	return 0;
}*/