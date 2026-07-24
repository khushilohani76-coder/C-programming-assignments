#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head=NULL;

void insertBeginning(int value)
{
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));

    newNode->data=value;
    newNode->next=head;
    head=newNode;
}

void insertEnd(int value)
{
    struct Node *newNode,*temp;

    newNode=(struct Node*)malloc(sizeof(struct Node));

    newNode->data=value;
    newNode->next=NULL;

    if(head==NULL)
    {
        head=newNode;
        return;
    }

    temp=head;

    while(temp->next!=NULL)
        temp=temp->next;

    temp->next=newNode;
}

void insertPosition(int value,int pos)
{
    struct Node *newNode,*temp;
    int i;

    newNode=(struct Node*)malloc(sizeof(struct Node));

    newNode->data=value;
    newNode->next=NULL;

    if(pos==1)
    {
        newNode->next=head;
        head=newNode;
        return;
    }

    temp=head;

    for(i=1;i<pos-1 && temp!=NULL;i++)
        temp=temp->next;

    if(temp==NULL)
    {
        printf("Invalid Position\n");
        return;
    }

    newNode->next=temp->next;
    temp->next=newNode;
}

void display()
{
    struct Node *temp=head;

    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

int main()
{
    insertBeginning(10);
    insertEnd(20);
    insertEnd(30);
    insertPosition(25,3);

    display();

    return 0;
}