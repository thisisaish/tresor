#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void append(struct node**,int);
void display(struct node**);
void swap(int,int,struct node**);

int main()
{
    int num,x,y;
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
    printf("\nEnter two numbers to be swapped\n");
    scanf("%d %d",&x,&y);
    swap(x,y,&head);
    printf("After swapping the contents are:\n");
    display(&head);
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
    struct node *temp=*headaddr;
    while(temp)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void swap(int x,int y,struct node **headaddr)
{
    struct node *prevx=NULL,*currx=*headaddr,*prevy=NULL,*curry=*headaddr,*temp;
    while(currx && currx->data!=x){
        prevx=currx;
        currx=currx->next;
    }
    while(curry && curry->data!=y){
        prevy=curry;
        curry=curry->next;
    }
    if(currx==NULL || curry==NULL){
        printf("\nData not found");
        return;
    }
    if(prevx!=NULL){
        prevx->next = curry;
    }
    else
        *headaddr=curry;

    if(prevy!=NULL)
        prevy->next=currx;
    else
        *headaddr = currx;

    temp=curry->next;
    curry->next=currx->next;
    currx->next=temp;

}
