
#include<stdio.h>
#include<conio.h>
#define SIZE 5


struct queue{
  int item[SIZE];
  int front;
  int rear;
}q;
void enQueue(struct queue *,int);
void deQueue(struct queue *);
void display(struct queue *);

int main()
{
    q.front=0,q.rear=-1;

   int value, choice;
    printf("***** MENU *****\n");
      printf("1. Insertion\t2. Deletion\t3. Display\t4. Exit\n");

   while(1){

      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d",&value);
		 enQueue(&q,value);
		 break;
	 case 2: deQueue(&q);
		 break;
	 case 3: display(&q);
		 break;
	 case 4:
          printf("\n______________________________________________________\n");
        printf("Smaran Rawal\n");
        printf("______________________________________________________\n");
	      exit(0);
	 default: printf("\nWrong selection!!! Try again!!!\n");
      }
   }
 return 0;
}

void enQueue(struct queue *q,int value){
   if(q->rear == SIZE-1)
      printf("\nQueue is Full!!! Insertion is not possible!!!\n");
   else{
      q->item[++q->rear]=value;
   }
}
void deQueue(struct queue *q){
   if(q->rear < q->front)
      printf("\nQueue is Empty!!! Deletion is not possible!!!\n");
   else{
      printf("\nDeleted : %d", q->item[q->front++]);
   }
}
void display(struct queue *q){
   if(q->rear == -1)
      printf("\nQueue is Empty!!!");
   else{
      int i;
      printf("\nQueue elements are:\n");
      for(i=q->front; i<=q->rear; i++)
	  printf("| %d |",q->item[i]);
   }
}
