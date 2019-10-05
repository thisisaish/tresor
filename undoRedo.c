#include<stdio.h>
#include<malloc.h>

struct Stack{
    char fword[20];
    int top;
}*stack = NULL;

char pop();
void push(char);
void printStack();

int main()
{
    stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = -1;
    char word[30],cache[30];
    int index=0,flag=0,cindex=-1;
    scanf("%[^\n]",word);
    while(word[index]){
        if(word[index]!='^'){
            push(word[index]);
            cindex = -1;
            flag = 0;
        }
        else if(word[index]=='^'){
                index++;
            if(word[index]=='z' && stack->top!=-1){
                cache[++cindex] = pop();
                flag = 1;
            }
            else if(word[index]=='y' && flag && cindex>=0){
                push(cache[cindex--]);
            }
        }
        index++;
    }
    printStack();
    return 0;
}

void push(char letter)
{
    stack->fword[++stack->top] = letter;
}

char pop()
{
    return stack->fword[stack->top--];;
}

void printStack()
{
    for(int i=0;i<=stack->top;i++)
        printf("%c",stack->fword[i]);
}
