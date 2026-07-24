#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL,*newnode,*temp,*prev;

void create()
{
    int n,i;
    printf("Enter number of nodes: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(head==NULL)
            head=temp=newnode;
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
}

void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

void deleteBeginning()
{
    temp=head;
    head=head->next;
    free(temp);
}

void deleteEnd()
{
    temp=head;

    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }

    prev->next=NULL;
    free(temp);
}

void deletePosition()
{
    int pos,i;

    printf("Enter Position: ");
    scanf("%d",&pos);

    temp=head;

    if(pos==1)
    {
        head=head->next;
        free(temp);
        return;
    }

    for(i=1;i<pos;i++)
    {
        prev=temp;
        temp=temp->next;
    }

    prev->next=temp->next;
    free(temp);
}

int main()
{
    int ch;

    create();

    do
    {
        printf("\n1.Display\n2.Delete Beginning\n3.Delete End\n4.Delete Position\n5.Exit\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: display(); break;
            case 2: deleteBeginning(); display(); break;
            case 3: deleteEnd(); display(); break;
            case 4: deletePosition(); display(); break;
            case 5: break;
            default: printf("Invalid Choice");
        }

    }while(ch!=5);

    return 0;
}