#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void append(struct node**,int);
void display(struct node**);
int recDisplay(struct node*);

int main()
{
    int num,x;
    struct node *head = NULL;
    while(1)
    {
        scanf("%d",&num);
        if(num==-1)
            break;
        append(&head,num);
    }
    printf("The contents in the list are ");
    display(&head);
    //recursively
    printf("\nThe contents in the list are ");
    num = recDisplay(head);
    printf("\nTotal number of nodes %d",num);
    //printf("%d",head->data);
    return 0;
}
void append(struct node **headaddr,int n)
{
    struct node *temp=*headaddr,*newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->next = NULL;
    if(*headaddr==NULL)
        *headaddr = newnode;
    else{
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void display(struct node **headaddr)
{
    int len=0;
    struct node *temp=*headaddr;
    while(temp)
    {
        printf("%d ",temp->data);
        temp = temp->next;
        len++;
    }
    printf("\nTotal number of nodes: %d",len);
}
//recursive display function
int recDisplay(struct node *temp)
{
    static int count=0;
    if(temp)
    {
        printf("%d ",temp->data);
        count++;
        recDisplay(temp->next);
    }
    return count;
}
