#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define size 10

struct queue{
    int item[size];
    int front,rear;
};
typedef struct queue st;

void createQueue(st* q)
{
    q -> front = q -> rear = -1;
}

bool isFull(st* q)
{
    return q -> rear == size-1;
}

bool isEmpty(st* q)
{
    return q -> front == -1 || q -> front == q -> rear+1;
}

 void enQueue(st* q, int value)
 {
     if(isFull(q))
     {
         printf("Queue is Full !! \n");
         return;
     }
     if( q -> front == -1)
        q -> front=0;

     q -> rear++;
     q -> item[q -> rear] = value;

     printf("%d is Inserted !!\n", q -> item[q -> rear]);
 }

 void deQueue(st* q)
 {
     if(isEmpty(q))
     {
         printf("Queue is Empty !!\n");
         return;
     }

     printf("%d is Deleted !!\n", q -> item[q -> front]);

     q -> front++;

     if( q -> front >  q -> rear)
        q -> front =  q -> rear = -1;

 }

 void display(st* q)
 {
      if(isEmpty(q))
     {
         printf("Queue is Empty !!\n");
         return;
     }

     for(int i=q -> front; i<=q -> rear; i++)
        printf("%d ->  ",q -> item[i]);
    printf("\n");

 }

 void revDisplay(st* q)
 {
      if(isEmpty(q))
     {
         printf("Queue is Empty !!\n");
         return;
     }

     for(int i=q -> rear; i>=q -> front; i--)
        printf("%d ->  ",q -> item[i]);
    printf("\n");

 }



int main()
{
    st* q =(st*)malloc(sizeof(st));

    createQueue(q);

    enQueue(q,10);
    enQueue(q,20);
    enQueue(q,30);
    enQueue(q,40);
    enQueue(q,50);

    display(q);

    deQueue(q);

    enQueue(q,60);

    deQueue(q);

    enQueue(q,70);

    display(q);

    revDisplay(q);



    return 0;
}
