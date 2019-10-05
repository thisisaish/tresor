#include<stdio.h>
#include<stdlib.h>
//incomplete
int main()
{
    int n,i,*arr;
    scanf("%d",&n);
    arr = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",arr+i);
    //for()
}
