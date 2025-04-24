#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//큐 기본
#define MAX_QUEUE_SIZE 5
typedef int element;
typedef struct {
	int front;
	int rear;
	element data[MAX_QUEUE_SIZE];
}QueueType;
//오류함수 에러나면 탈출! void
void error(char* message)
{
	fprintf(stderr, "%s\n", message); //printf("%s",message);
	exit(1);
}
//초기화함수 반환할 거 없으니까 void
void init_queue(QueueType* q)
{
	q->rear = -1;
	q->front = -1;
}
//print
void queue_print(QueueType* q)
{
	for (int i = 0;i < MAX_QUEUE_SIZE;i++) {
		if (i <= q->front || i > q->rear)
			printf("  |");
		else
			printf("%d|", q->data[i]);
	}
	printf("\n");
}
int is_full(QueueType* q)
{
	if (q->rear == MAX_QUEUE_SIZE - 1)
		return 1;
	else
		return 0;
}
int is_empty(QueueType* q)
{
	if (q->front == q->rear)
		return 1;
	else
		return 0;
}
//인큐 반환 X
void enqueue(QueueType* q, int item)
{
	if (is_full(q)) {
		error("큐 포화");
		return;
	}
	q->data[++(q->rear)] = item;
}
//디큐 반환 필요
int dequeue(QueueType* q)
{
	if (is_empty(q)) {
		error("큐 공백");
		return -1;
	}
	int item = q->data[++(q->front)];
	return item;
}
int main(void)
{
	int item = 0;
	QueueType q;

	init_queue(&q);

	enqueue(&q, 10);	queue_print(&q);
	enqueue(&q, 20);	queue_print(&q);
	enqueue(&q, 30);	queue_print(&q);

	item = dequeue(&q); queue_print(&q);
	item = dequeue(&q); queue_print(&q);
	item = dequeue(&q); queue_print(&q);

	return 0;

}
