#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void append(struct node**,int);
void display(struct node**);
void deleteNode(int,struct node**);

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
    printf("\nEnter the number to be deleted\n");
    scanf("%d",&x);
    deleteNode(x,&head);
    printf("After deleting:\n");
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
//delete node when reference to the head node is
// not given
/*
void deleteNode(struct node* n)
{
    struct node* temp = n->next;
    n->data = temp->data;
    n->next = temp->next;
}
*/
void deleteNode(int x,struct node **headaddr)
{
    struct node *prev=NULL,*curr=*headaddr;
    while(curr && curr->data!=x){
        prev=curr;
        curr=curr->next;
    }
    if(curr==NULL){
        printf("\nData not found\n");
        return;
    }
    if(prev!=NULL){
        prev->next = curr->next;
    }
    else
        *headaddr=curr->next;
    free(curr);
}
