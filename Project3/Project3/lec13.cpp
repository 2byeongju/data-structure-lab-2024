#include <stdio.h>

int stack[100];
int top = -1;

int isStackEmpty() {
	if (top == -1) return 1;
	else return 0;
}

int isStackFull() {
	if (top == 99) return 1;
	else return 0;
}

void push(int item) {
	if (isStackFull()) {
		printf("\n\n Stack is FULL\n");
		return 0;
	}
	else stack[++top] = item;
}

int pop() {
	if (isStackEmpty()) {
		printf("\n\n Stack is Empty\n");
		return 0;
	}
	else return stack[top--];
}

int peek() {
	if (isStackEmpty()) {
		printf("\n\n Stack is Empty\n");
		return 0;
	}
	else return stack[top];
}

void printStack() {
	printf("\n STACK [ ");
	for (int i = 0; i <= top; i++)
		printf("%d", stack[i]);
	printf("] ");
}


int isStackEmpty();
int isStackFull();
void push(int item);
int pop();
int peek();
void printStack();

int main(void) {
	int item;
	printf("\n** 순차 스택 연산 **\n");
	printStack();
	push(1); printStack();
	push(2); printStack();
	push(3); printStack();

	item = peek(); printf("peed => %d\n", item); printStack();
	item = pop(); printf("pop => %d\n", item); printStack();
	
	getchar();
	return 0;
}