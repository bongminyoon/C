#pragma once
typedef struct ListNode
{
	char data[4];
	struct ListNode* link;
}listNode;

typedef struct
{
	listNode* head;
}linkedList_h;

//struct ListNode* head;  <- 바꿔서 코드 가져오기


linkedList_h* createLinkedList_h(void);
void freeLinkedList_h(linkedList_h* L); //매개변수 = 구조체의 주소
void printList(linkedList_h* L);
void insertFirstNode(linkedList_h* L, char* x);
void insertMiddleNode(linkedList_h* L, listNode* pre, char* x); //헤드주소, 이저의 주소
void insertLastNode(linkedList_h* L, char* x);
void deleteNode(linkedList_h* L, listNode* p);
listNode* searchNode(linkedList_h* L, char* x);
void reverse(linkedList_h* L);		