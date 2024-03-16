// Write a C program that implements a simple queue using a structure. The structure should contain an array representing the queue and front and rear indices. Include functions for enqueue and dequeue operations

#include <stdio.h>

typedef struct Queue{
	int arr[100];
	int front;
	int rear;
} queue;

void enqueue(int,queue*);
void dequeue(queue*);

int main(){
	struct Queue q1;
	q1.front = 0;
	q1.rear = 0;
	enqueue(1,&q1);
	enqueue(2,&q1);
	enqueue(3,&q1);
	enqueue(4,&q1);
	enqueue(5,&q1);
	dequeue(&q1);
	// dequeue(&q1);

	for(int i = q1.front; i < q1.rear; i++){
		printf("%d\n",q1.arr[i]);
	}

}

void enqueue(int n,queue* q){
	printf("enqueueing data %d to the queue\n",n);
	q->arr[q->rear] = n;
	q->rear++;
}

void dequeue(queue* q){
	printf("dequeueing data from queue\n");
	q->arr[q->front] = 0;
	q->front++;
}

