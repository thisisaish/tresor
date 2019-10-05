#include<stdio.h>
#include<stdlib.h>

struct node{
    char data;
    struct node *next;
};

void append(struct node**,char);
char pop(struct node**);

int main()
{
    struct node *head=NULL;
    char str[20];
    int index=0;
    scanf("%s",str);
    while(str[index]!='\0')
    {
        if(str[index]==')'||str[index]=='}'||str[index]==']')
        {
            char top = pop(&head);
            if(top!='-1')
            {
                if(!((str[index]==')'&&top=='(') || (str[index]=='}'&&top=='{') || (str[index]==']'&&top=='[')))
                {
                    printf("Not balanced\n");
                    break;
                }
            }
            else{
                printf("Not balanced\n");
                break;
            }
        }
        else{
            append(&head,str[index]);
        }
        index++;
    }
    if(str[index]=='\0')
        printf("Balanced");
}
void append(struct node** headaddr,char d)
{
    struct node *temp=*headaddr,*newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = d;
    newnode->next = NULL;
    if(*headaddr==NULL)
        *headaddr = newnode;
    else{
        while(temp->next!=NULL)
            temp = temp->next;
        temp->next = newnode;
    }
}
char pop(struct node** headaddr)
{
    if(*headaddr==NULL)
        return '-1';
    struct node *temp=*headaddr,*n;
    char d;
    if(temp->next==NULL){
        d = temp->data;
        *headaddr=NULL;
        free(temp);
        return d;
    }
    //stop at last before node and make the last before node point NULL
    while(temp->next->next!=NULL)
    {
        temp = temp->next;
    }
    n = temp->next;
    d = n->data;
    temp->next=NULL;
    free(n);
    return d;
}
