#include <stdio.h>

char *my_strcpy(char* pd, char* ps);

int main(void)
{
	char str[80] = "strawberry";

	printf("바꾸기 전 문자열 : %s\n", str);
	my_strcpy(str, "apple");
	printf("바꾼 후 문자열 : %s\n", str);
	printf("다른 문자열 대입 : %s\n", my_strcpy(str, "kiwi"));

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

	printf("최초 문자열 : %s\n", str1);
	strcpy(str1, str2);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps1);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps2);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, "banana");
	printf("바뀐 문자열 : %s\n", str1);

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

	printf("공백이 포함된 문자열 입력 : ");
	fgets(str, sizeof(str), stdin);
	printf("입력된 문자열은 %s입니다\n", str);

	return 0;
}
/*
{
	char str[80];

	printf("공백이 포함된 문자열 입력 : ");
	gets(str);
	printf("입력한 문자열은 %s 입니다", str);

	return 0;
}
/* {
	char str[80];

	printf("문자열 입력 : ");
	scanf("%s", str);
	printf("첫 번쨰 단어 : %s\n", str);
	scanf("%s", str);
	printf("버퍼에 남아 있는 두 번째 단어 : %s\n", str);

	return 0;
}
/*void my_gets(char* str, int size);

int main(void)
{
	char str[7];

	my_gets(str, sizeof(str));
	printf("입력한 문자열 :  %s\n", str);

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
	printf(" 입력한 문자 : ");
	putchar(ch);
	putchar('\n');

	return 0;
}*/