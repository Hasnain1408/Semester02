#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* link;
};

void creatLinkedList(struct node* head,int value)
{

}

void  add_at_end(struct node* head,int data)
{
    struct node *ptr,*temp;
    ptr=head;
    temp=malloc(sizeof(struct node));

    temp -> data=data;
    temp -> link=NULL;

    while(ptr -> link= NULL)
     {
          printf("%d\n", temp -> data);
          ptr=ptr -> link;
     }



}

int main()
{
     struct node* head=malloc(sizeof(struct node));
     head -> data=10;
     head -> link=NULL;

     struct node* current=malloc(sizeof(struct node));
     current -> data=20;
     current -> link=NULL;
     head -> link=current;

     struct node* current2=malloc(sizeof(struct node));
     current2 -> data=30;
     current2 -> link=NULL;
     current -> link=current2;

     struct node* temp=malloc(sizeof(struct node));
     temp=head;

     add_at_end(head,41);

    int i=0;
     while(temp != NULL)
     {
          printf("%d\n", temp -> data);
          temp=temp -> link;
          i++;
     }

     printf("Number of node : %d\n", i);

}
