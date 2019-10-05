#include<stdio.h>
#include<malloc.h>


/*Given a string S, find length of the longest substring with all distinct characters.
For example, for input "abca", the output is 3 as "abc" is the longest substring with all
distinct characters.*/
struct stack
{
    char data[20];
    int top;
};

int ispresent(struct stack**,char);

int main()
{
    int index=0;
    struct stack *st = (struct stack*)malloc(sizeof(struct stack));
    st->top = -1;
    char str[100];
    scanf("%s",str);
    while(str[index]!='\0')
    {
        if(!ispresent(&st,str[index]))
        {
            push(st,str[index]);
        }
        index++;
    }
    printf("%d",countLength(st));
}
int ispresent(struct stack** s,char letter)
{
    struct stack *temp = *s;
    if(temp==NULL)
        return 0;
    else{
        for(int i=0;i<=temp->top;i++)
            if(temp->data[i]==letter)
                return 1;
    }
    return 0;
}
void push(struct stack* s,char letter)
{
    s->top = s->top + 1;
    s->data[s->top] = letter;
}
int countLength(struct stack* s)
{
    return s->top + 1;
}
