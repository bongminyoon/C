#include <stdlib.h>
#include "stackL.h"

//스택이 공백 상태인지 확인하는 연산
int isStackEmpty()
{
	if (top == NULL) return 1;
	else return 0;

}

//스택의 top에 원소를 삽입하는 연산
void push(element item)
{
	stackNode* temp = (stackNode*)malloc(sizeof(stackNode));

	temp->data = item;
	temp->link = top;
	top = temp;
}

//스택의 top에서 원소를 삭제하느 연산
element pop()
{
	element item;
	stackNode* temp = top;

	if (isStackEmpty())
	{
		printf("\n\n Stack is emprt!\n");
		return 0;

	}
	else
	{
		item = temp->data;
		top = temp->link;
		free(temp);
		return item;
	}

}

element peek()
{
	if (isStackEmpty())
	{
		printf("\n\n Stack is empty! \n");
		return 0;
	}
	else
	{
		return(top->data);

	}
}

void printStack()
{
	{
		stackNode * p = top;
		printf("\n STACK[");
		while (p)
		{
			printf("%d", p->data);
			p = p->link;
		}
	}
	printf("]");
}

