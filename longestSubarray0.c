#include<stdio.h>
#include<malloc.h>

int main()
{
    int n,*arr,i,j,sum,len,maxLen=0,prevEnd;
    scanf("%d",&n);
    arr = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",arr+i);
    for(i=0;i<n;i++)
    {
        sum = *(arr+i);
        for(j=i+1;j<n;j++)
        {
            sum+= *(arr+j);
            if(sum==0)
            {
                len = j-i+1;
                //printf("%d\n",j-i);
                if(prevEnd+1==i)
                    maxLen += len;
                else if(len>maxLen)
                    maxLen = len;
                break;
            }
        }
        if(sum==0)
            prevEnd = j;
    }
    printf("%d",maxLen);
}
