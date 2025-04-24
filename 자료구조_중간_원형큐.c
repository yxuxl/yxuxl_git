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
//원형큐는 초기화 0으로 함 왜냐면 0 비워놓을거야
void init_queue(QueueType* q)
{
	q->rear = 0;
	q->front = 0;
}
//print
void queue_print(QueueType* q)
{
	printf("QUEUE(front=%d rear=%d)=", q->front, q->rear);

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
int is_full(QueueType* q)
{
	return((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
}
int is_empty(QueueType* q)
{
	return (q->front == q->rear);
}
//인큐 반환 X
void enqueue(QueueType* q, element item)
{
	if (is_full(q)) {
		error("큐 포화");
		return;
	}
	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
	q->data[q->rear] = item;
}
//디큐 반환 필요
element dequeue(QueueType* q)
{
	if (is_empty(q)) {
		error("큐 공백");
		exit(1);
	}
	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
	return q->data[q->front];
}
int main(void)
{
	QueueType queue;
	int element;

	init_queue(&queue);
	printf("데이터추가단계\n");
	while (!is_full(&queue))
	{
		printf("정수 입력: ");
		scanf("%d", &element);
		enqueue(&queue, element);
		queue_print(&queue);
	}
	printf("큐 포화 상태");

	printf("데이터 삭제 단계");
	while (!is_empty(&queue))
	{
		element = dequeue(&queue);
		printf("꺼내진 정수: %d \n", element);
		queue_print(&queue);
	}
	printf("큐 공백 상태\n");
	return 0;

}
