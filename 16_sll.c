#include<stdio.h>
#include<stdlib.h>
struct SLL
{
    int data;
    struct SLL *ptr;
};
void addbeg(struct SLL **head, int num)
{
    struct SLL *newnode;
    newnode=(struct SLL *)malloc(sizeof(struct SLL));
    newnode->data=num;
    newnode->ptr=NULL;
    if(*head==NULL)
    {
        *head=newnode;
    }
    else
    {
        newnode->ptr=*head;
        *head=newnode;
    }
}
void addend(struct SLL **head, int num)
{
    struct SLL *newnode,*temp;
    newnode=(struct SLL *)malloc(sizeof(struct SLL));
    newnode->data=num;
    newnode->ptr=NULL;
    if(*head==NULL)
    {
        *head=newnode;
    }
    else
    {
        temp=*head;
    while(temp->ptr!=NULL)
    {
        temp=temp->ptr;
    }
    temp->ptr=newnode;
    }
}
void addsp(struct SLL **head, int num,int pos)
{
    struct SLL *newnode,*temp;
    int i;
    newnode=(struct SLL *)malloc(sizeof(struct SLL));
    newnode->data=num;
    newnode->ptr=NULL;
    if(*head==NULL)
    {
    *head=newnode;
    }
    else
    {
        temp=*head;
        for(i=0;i<pos-1;i++)
        {
            temp=temp->ptr;
        }
        newnode->ptr=temp->ptr;
        temp->ptr=newnode;
    }
}
void display(struct SLL **head)
{
    struct SLL *temp;
    if(*head==NULL)
    {
        printf("Linked list doesnot exist");
    }
    else
    {
        printf("Linked list is\n");
        temp=*head;
        while(temp!=NULL)
        {
            printf("%d-> ",temp->data);
            temp=temp->ptr;
        }
        printf("\n");
    }
}
void delbeg(struct SLL **head)
{
    struct SLL *temp;
    if(*head==NULL)
    {
        printf(" Linked list doesnot exist\n");
    }
    else
    {
        temp=*head;
        *head=(*head)->ptr;
        printf(" Deleted item is %d\n",temp->data);
        free(temp);
    }
}
void delend(struct SLL **head)
{
    struct SLL *temp,*temp1;
    if(*head==NULL)
    {
        printf(" Linked list doesnot exist\n");
    }
    else
    {
        temp=*head;
        while(temp->ptr!=NULL)
        {
            temp1=temp;
            temp=temp->ptr;
        }
        temp1->ptr=NULL;
        printf(" Deleted item is %d\n",temp->data);
        free(temp);
    }
}
 int main()
{
    struct SLL *head;
    int num,choice,pos;
    head=NULL;
    printf("\n1.Add at beginning\n2.Add at end\n3.Add at specific position \n4.Display \n5.Delete from beginning\n6.Delete from end\n7.Exit\n");
    while(1)
    {
        printf("\n Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter the number:");
                scanf("%d",&num);
                addbeg(&head,num);
                break;
            case 2:
                printf("Enter the number:");
                scanf("%d",&num);
                addend(&head,num);
                break;
            case 3:
                printf("Enter the position:");
                scanf("%d",&pos);
                printf("Enter the number:");
                scanf("%d",&num);
                addsp(&head,num,pos);
                break;
            case 4:
                display(&head);
                break;
            case 5:
                delbeg(&head);
                break;
            case 6:
                delend(&head);
                break;
            case 7:
     printf("\n______________________________________________________\n");
        printf("Smaran Rawal\n");
        printf("______________________________________________________\n");
                exit(0);
        }
    }
    return 0;
}
