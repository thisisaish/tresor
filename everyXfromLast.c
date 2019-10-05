#include<stdio.h>
#include<string.h>

int main()
{
    int n,end,start;
    scanf("%d",&n);
    n--;
    char word[100];
    scanf("%s",word);
    end = strlen(word)-1;
    start = end - n;
    while(start>=0 && end>=0){
        int temp = start;
        while(start<=end)
            printf("%c",word[start++]);
        printf("\n");
        if(temp-1 < 0)
            break;
        end = temp - 1;
        start = end - n < 0 ? 0 : end - n;
    }
}
