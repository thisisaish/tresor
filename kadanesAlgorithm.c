#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,*arr,soFarMax=0,maxEndingHere=0,i;
    int start,end,s;
    scanf("%d",&n);
    arr = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    for(i=0;i<n;i++){
        maxEndingHere += *(arr+i);
        if(maxEndingHere<0){
            maxEndingHere = 0;
            s = i+1;
        }
        if(maxEndingHere>soFarMax){
            soFarMax = maxEndingHere;
            start = s;
            end = i;
        }
    }
    printf("Maximum contiguous array sum: %d\n",soFarMax);
    printf("Contiguous array:\n");
    for(i=start;i<=end;i++)
        printf("%d ",*(arr+i));
}
