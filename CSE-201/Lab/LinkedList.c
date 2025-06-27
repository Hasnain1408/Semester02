#include<stdio.h>
#include<stdlib.h>

struct student{
    int roll;
    int marks;
    struct student *next;
};
    struct student *head=NULL;
    struct student *ptr = NULL;


void creatLinkList(int marks)
{

      struct student *temp = (struct student*) malloc(sizeof(struct student));

     temp -> marks = marks;
     temp -> next = NULL;
     ptr -> next=temp;
     ptr=temp;


}

void traverseLinkedList(struct student* head)
{
        ptr=(struct student*) malloc(sizeof(struct student));
        ptr=head;
        while(ptr != NULL)
        {
            printf("%d ->",ptr -> marks);
            ptr=ptr -> next;
        }
        printf("\n");
}

void deletNode(struct student* head,int data)
{
        ptr=(struct student*) malloc(sizeof(struct student));
        ptr=head;

        while(ptr -> next -> marks != data)
        {
            ptr=ptr -> next;
        }

        ptr -> next=ptr -> next ->next;
}

void insertNode(struct student* head,int data)
{
        ptr=(struct student*) malloc(sizeof(struct student));
        ptr=head;

        struct student* temp=NULL;
        temp=(struct student*) malloc(sizeof(struct student));
        temp -> marks=data;
        temp ->next=NULL;

        while(ptr -> next -> marks > data)
        {
            ptr=ptr -> next;
        }

        temp -> next=ptr -> next;
        ptr -> next=temp;
}

int main()
{

        int num[5]={90,80,70,60,50};
        int i;

        ptr=(struct student*) malloc(sizeof(struct student));
        head=(struct student*) malloc(sizeof(struct student));
        ptr=head;

        ptr -> marks=num[0];
         ptr -> next=NULL;

        for(i=1; i<5; i++)
        {
            creatLinkList(num[i]);
        }

        traverseLinkedList(head);

        deletNode(head,70);
        traverseLinkedList(head);

        insertNode(head,75);
        traverseLinkedList(head);




return 0;
}


