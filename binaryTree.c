#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//balanced binary tree
struct tree{
    int data;
    struct tree *left;
    struct tree *right;
};

void create(int,struct tree**);
void print(struct tree*);
void preorder(struct tree*);
void postorder(struct tree*);
void printLeftView(struct tree*);
void printBottomView(struct tree*);

int main()
{
    //Fill the code
    struct tree *head=NULL;
    char ans[5]="yes";
    int num=1;
    while(1)
    {
        printf("Enter the element to be inserted in the tree\n");
        scanf("%d",&num);
        create(num,&head);
        printf("Do you want to insert another element?\n");
        scanf("%s",ans);
        if(strcmp(ans,"no")==0)
            break;
    }
    printf("Inorder Traversal: The elements in the tree are ");
    print(head);
    printf("\nPreorder Traversal: The elements in the tree are ");
    preorder(head);
    printf("\nPostorder Traversal: The elements in the tree are ");
    postorder(head);
    printf("\nLeft view of the binary tree ");
    printLeftView(head);
    printf("\nBottom view of the binary tree ");
    printBottomView(head);
    return 0;
}
void create(int n,struct tree **headaddr)
{
    struct tree *temp=*headaddr,*new1;
    new1 = (struct tree*)malloc(sizeof(struct tree));
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
void print(struct tree *temp)
{
    //struct tree *temp=*headaddr;
    if(temp!=NULL){
        print(temp->left);
        printf("%d ",temp->data);
        print(temp->right);
    }
    //printf("\n");
}
void preorder(struct tree *temp)
{
    //struct tree *temp=*headaddr;
    if(temp!=NULL){
        printf("%d ",temp->data);
        preorder(temp->left);
        preorder(temp->right);
    }
    // printf("\n");
}
void postorder(struct tree *temp)
{
    //struct tree *temp=*headaddr;
    if(temp!=NULL){
        postorder(temp->left);
        postorder(temp->right);
        printf("%d ",temp->data);
    }
    // printf("\n");
}
void printLeftView(struct tree* temp)
{
    if(temp)
    {
        printf("%d ",temp->data);
        printLeftView(temp->left);
    }
}
void printBottomView(struct tree* temp)
{
    //incorrect
    if(temp->left==NULL && temp->right==NULL)
        printf("%d ",temp->data);
    if(temp){
        printBottomView(temp->left);
        printBottomView(temp->right);
    }
}
