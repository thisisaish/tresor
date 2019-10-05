#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void append(struct node**,int);
void display(struct node**);
void rearrange(struct node*);

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
    rearrange(head);
    printf("After rearranging the contents are:\n");
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
void rearrange(struct node *head)
{
    struct node *odd = head,*even=head->next,*evenFirst = head->next;
    while(1)
    {
        if(!odd || !even || !even->next){
            odd->next =  evenFirst;
            break;
        }

        odd->next = even->next;
        odd = even->next;

        if(odd->next == NULL)
        {
            even->next = NULL;
            odd->next = evenFirst;
            break;
        }
        even->next = odd->next;
        even = odd->next;
    }
    return ;
}
