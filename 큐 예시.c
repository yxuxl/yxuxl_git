#include <stdio.h>
#define STACK_SIZE 10

int top = -1;
int stack[STACK_SIZE];

void push(int data)
{
	if (top >= STACK_SIZE - 1)
	{
		printf("꽉 참");
		return;
	}
	stack[++top] = data;
}
int pop(void)
{
	if (isEmpty())
	{
		printf("텅 빔");
		return 0;
	}
	return stack[top--];
}
int peek(void)
{
	if (isEmpty())
	{
		printf("스택이 빔");
		return 0;
	}
	return stack[top];
}
int isEmpty(void)
{
	return top == -1 ? 1 : 0;
}
void printStack(void) {
	if (isEmpty())
	{
		printf("[]\n");
		return;
	}
	printf("[ ");
	for (int i = 0;i < STACK_SIZE;i++)
	{
		if (i <= top)
		{
			printf("%d", stack[i]);
		}
		else
		{
			printf("- ");
		}
	}
	printf("]\n");
}
int main(void)
{
	push(4);
	push(-102);
	push(23);
	push(9);
	push(10);
	printStack();

	int popValue = pop();
	printf("pop: %d\n", popValue);

	int peekValue = peek();
	printf("peek: %d\n", peekValue);
	
	pop();
	pop();
	printStack();

	return 0;
}
