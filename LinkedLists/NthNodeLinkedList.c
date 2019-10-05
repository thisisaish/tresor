#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void append(struct node**,int);
void display(struct node*);
void nthNode(struct node**,int);

int main()
{
    int num;
    struct node *head=NULL;
    while(1)
    {
        scanf("%d",&num);
        if(num==-1)
            break;
        append(&head,num);
    }
    printf("The nodes of the list are ");
    display(head);
    printf("\nEnter the node position to be displayed from first and last\n");
    scanf("%d",&num);
    nthNode(&head,num);
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
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
void display(struct node *temp)
{
    if(temp){

        printf("%d ",temp->data);
        display(temp->next);
    }
}
void nthNode(struct node **headaddr,int pos)
{
    struct node *temp=*headaddr,*refnode=*headaddr;
    int pos1=pos--;
    //to move to the nth node from first
    while(pos--){
        refnode = refnode->next;
    }
    printf("%dth node from first %d\n",pos1,refnode->data);
    //to move to the nth node from last
    while(refnode->next!=NULL)
    {
        refnode = refnode->next;
        temp = temp->next;
    }
    printf("%dth node from last %d",pos1,temp->data);
}
