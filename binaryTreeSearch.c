#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NULL 0

struct tree{
    int data;
    struct tree *left;
    struct tree *right;
};

void create(int,struct tree**);
void print(struct tree*);
int search(int,struct tree*);

int main()
{
    //Fill the code
    struct tree *head;
    head = (struct tree*)malloc(sizeof(struct tree));
    //char ans[5]="yes";
    int num=1;
    while(num!=-1)
    {
        printf("Enter the element to be inserted in the tree\n");
        scanf("%d",&num);
        create(num,&head);
    }
    printf("Enter the element to be searched\n");
    scanf("%d",&num);
    if(search(num,head)){
        printf("%d found",num);
    }
    else
        printf("%d could not be found",num);
    return 0;
}
void create(int n,struct tree **headaddr)
{
    struct tree *temp=*headaddr,*new1;
    new1 = (struct tree*)malloc(sizeof(struct node*));
    new1->data = n;
    new1->left = NULL;
    new1->right = NULL;
    if(*headaddr==NULL)
        *headaddr = new1;
    else{
        while(1){
            if(n <= temp->data){
                if(temp->left!=NULL){
                    temp = temp->left;
                }
                else{
                    temp->left =  new1;
                    break;
                }
            }
            else if(n > temp->data)
            {
                if(temp->right!=NULL)
                    temp = temp->right;
                else{
                    temp->right = new1;
                    break;
                }
            }
        }
    }
}
int search(int key,struct tree *temp)
{
    if(temp==NULL)
        return 0;
    else if(key==temp->data){
        return 1;
    }
    else if(key<temp->data)
        search(key,temp->left);
    else
        search(key,temp->right);
}

