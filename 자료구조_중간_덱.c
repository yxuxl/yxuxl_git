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
}DequeType;
//오류함수 에러나면 탈출! void
void error(char* message)
{
	fprintf(stderr, "%s\n", message); //printf("%s",message);
	exit(1);
}
//원형큐는 초기화 0으로 함 왜냐면 0 비워놓을거야
void init_deque(DequeType* q)
{
	q->rear = 0;
	q->front = 0;
}
//print
void deque_print(DequeType* q)
{
	printf("DEQUE(front=%d rear=%d)=", q->front, q->rear);

	if (!is_empty(q))
	{
		int i = q->front;
		do {
			i = (i + 1) % (MAX_QUEUE_SIZE);
			printf("%d|", q->data[i]);
			if (i == q->rear)
				break;
		} while (i != q->front);
	}
	printf("\n");
}
int is_full(DequeType* q)
{
	return((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
}
int is_empty(DequeType* q)
{
	return (q->front == q->rear);
}
//add_rear = enqueue랑 같음
void add_rear(DequeType* q, element item)
{
	if (is_full(q)) {
		error("덱 포화");
		return;
	}
	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE; //중요
	q->data[q->rear] = item; //중요
}
//delete_front = dequeue랑 같음
element delete_front(DequeType* q)
{
	if (is_empty(q)) {
		error("덱 공백");
		exit(1);
	}
	q->front = (q->front + 1) % MAX_QUEUE_SIZE; //중요
	return q->data[q->front]; //중요
}
//get_front추가!!! 선입선출이었는데 앞에 추가하는 기능이 생김
element get_front(DequeType* q)
{
	if (is_empty(q)) {
		error("덱이 공백");
		exit(1);
	}
	return q->data[(q->front + 1) % MAX_QUEUE_SIZE]; //중요
}
//get_rear추가
element get_rear(DequeType* q)
{
	if (is_empty(q)) {
		error("덱이 공백");
		exit(1);
	}
	return q->data[q->rear];
}
//add_front
element add_front(DequeType* q, element val)
{
	if (is_full(q)) {
		error("덱이 포화");
		return;
	}
	q->data[q->front] = val;
	q->front = (q->front - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
}
element delete_rear(DequeType *q)
{
	int prev = q->rear;
	if (is_empty(q)) {
		error("덱이 공백");
		exit(1);
	}
	q->rear = (q->rear - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
	return q->data[prev];
}


int main(void)
{
	DequeType queue;

	init_deque(&queue);
	for (int i = 0;i < 3;i++) {
		add_front(&queue, i);
		deque_print(&queue);
	}
	for (int i = 0;i < 3;i++)
	{
		delete_rear(&queue);
		deque_print(&queue);
	}
	return 0;
}
