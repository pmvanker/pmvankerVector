#include<stdio.h>
#include<stdlib.h>

typedef struct ArrayQueue
{
	int front,rear;
	int capacity;
	int *array;
}AQ;

AQ * create_Queue(int cap)
{
	AQ *Q=(AQ*)malloc(sizeof(AQ));
	Q->capacity=cap;
	Q->front=Q->rear=-1;
	Q->array=(int*)malloc(sizeof(int)*cap);
	return Q;
}

int isEmptyQueue(AQ *Q)
{
	return (Q->front==-1);
}
int isFullQueue(AQ *Q)
{
	return ( (Q->rear+1)%Q->capacity == Q->front);
}
int QueueSize(AQ *Q)
{
	return ((Q->capacity) - (Q->front) + (Q->rear+1)%(Q->capacity));
}

void enQueue(AQ *Q,int item)
{
	if(isFullQueue(Q))
		printf("overflow\n");
	else
	{
		Q->rear=(Q->rear+1)%Q->capacity;
		Q->array[Q->rear]=item;
		if(Q->front==-1)
			Q->front=Q->rear;
	}
}
int deQueue(AQ *Q)
{
	int data;
	if(isEmptyQueue(Q))
	{
		printf("Queue is Empty\n");
		return -1;	
	}
	else
	{	
		data=Q->array[Q->rear];
		if(Q->front==Q->rear)
			Q->front=Q->rear=-1;
		else
			Q->front=(Q->front+1)%Q->capacity;
	}
	return data;
}
void deleteQueue(AQ *Q)
{
	if(Q)
	{
		if(Q->array)
			free(Q->array);
		free(Q);
	}
}
int main()
{
	AQ *Q;
	Q=create_Queue(5);
	enQueue(&Q,10);
	enQueue(&Q,20);
	printf("%d",deQueue(&Q));
	printf("%d",deQueue(&Q));
}
