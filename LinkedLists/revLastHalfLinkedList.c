#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void append(struct node**,int);
int display(struct node*);
void reverse(int,struct node**);

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
    num=display(head);
    //num = num%2 == 0 ? num/2 : (num+1)/2;
    reverse(num/2,&head);
    printf("\nAfter reversing the last half nodes of the linked list\n");
    display(head);
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
int display(struct node *temp)
{
    static int count=0;
    if(temp)
    {
        printf("%d ",temp->data);
        count++;
        display(temp->next);
    }
    return count;
}
void reverse(int n,struct node** headaddr)
{
    struct node *temp=*headaddr,*prev=NULL,*nextNode=NULL,*mid;
    //int mid;
    //traverse till the middle node
    while(n--){
        mid=temp;
        temp=temp->next;
    }
    //reverse from the middle node
    while(temp){
        nextNode = temp->next;
        temp->next = prev;
        prev = temp;
        temp = nextNode;
    }
    mid->next = prev;
}
