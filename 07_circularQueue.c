#include<stdio.h>
#define MAXQUEUE 5


struct queue
	{
	int items[MAXQUEUE];
	int front, rear;
	}q;
void enqueue(struct queue *, int);
void dequeue(struct queue *);
void display(struct queue *);


void main()
{
int option;
int x;
char ch='y';
q.front=MAXQUEUE-1;
q.rear=MAXQUEUE-1;

printf("***** MENU *****\n");
      printf("1. Insertion\t2. Deletion\t3. Display\t4. Exit\n");
while(1)
	{
	printf("\nEnter your option:");
	scanf("%d", &option);
	switch(option)
		{
		case 1:
		       printf("Enter item to insert:");
		       scanf("%d", &x);
		       enqueue(&q, x);
		       break;
		case 2:
		       dequeue(&q);
		       break;
		case 3:
		       display(&q);
		       break;
        case 4:
            printf("\n______________________________________________________\n");
        printf("Smaran Rawal\n");
        printf("______________________________________________________\n");
             exit(0);
		default:
			printf("Invalid Option\n");
			break;
		}
    }
}
void enqueue(struct queue *q, int l)
{
if((q->rear+1)%MAXQUEUE==q->front)
	{
	printf("Queue is full\n");
	return;
	}
q->rear=(q->rear+1)%MAXQUEUE;
q->items[q->rear]=l;
}

void dequeue(struct queue *q)
{
int x;
if(q->rear==q->front)
	{
	printf("Queue is empty\n");
	}
else
    {
    x=q->items[(q->front+1)%MAXQUEUE];
    q->front=(q->front+1)%MAXQUEUE;
    printf("The removed item is:%d \n", x);
    }
}
void display(struct queue *q)
{
int i;
if(q->rear==q->front)
	printf("Queue is empty\n");
else
	{
	printf("Items of queue are: \n");
	for(i=(q->front+1)%MAXQUEUE;i!=(q->rear+1)%MAXQUEUE;i=(i+1)%MAXQUEUE)
		printf("| %d |", q->items[i]);
	printf("\n");
	}

}

