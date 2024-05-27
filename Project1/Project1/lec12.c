#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct ListNode {
	char data[4];
	struct ListNode* link;
} listNode;

typedef struct {
	listNode* head;
} linkedList_h;

linkedList_h* createLinkedList_h(void) {
	linkedList_h* L;
	L = (linkedList_h*)malloc(sizeof(linkedList_h));
	L->head = NULL;
	return L;
}

void printList(linkedList_h* L) {
	listNode* p;
	printf("L = (");
	p = L->head;
	while (p != NULL) {
		printf("%s", p->data);
		p = p->link;
		if (p != NULL) printf(", ");
	}
	printf(")\n");
}
void insertFirstNode(linkedList_h* L, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	newNode->link = L->head;
	L->head = newNode;
}
void insertMiddleNode(linkedList_h* L, listNode* pre, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));

	strcpy(newNode->data, x);
	newNode->link = L->head;
	L->head = newNode;
}

void insertLastNode(linkedList_h* L, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	newNode->link = NULL;

	listNode* temp;
	if (L->head == NULL) {//공백의 리스트인 경우
		L->head;newNode;
		return;
	}

	//공백의 리스트가 아닌 경우
	temp = L->head;
	while (temp->link != NULL) temp = temp->link;
	temp->link = newNode;
}

int main(void) {
	linkedList_h* L;
	L = createLinkedList_h();
	printf("(1) 공백 리스트 생성\n");
	printfList(L);

	printf("(2) 노드 삽입\n");
	insertFirstNode(L, "월");
	insertFirstNode(L, "화");
	insertFirstNode(L, "수");
	insertLastNode(L, "화");
	printfList(L);
}
