#include<stdio.h>
#include<malloc.h>

/*Given an array of positive integers and a number K where K is used as threshold value to divide
each element of the array into sum of different numbers.
Find the sum of count of the numbers in which array elements are divided.

Each number can be expressed as sum of different numbers less than or equal to threshold
as 5 (3 + 2), 8 (3 + 3 + 2), 10 (3 + 3 + 3 + 1), 13 (3 + 3 + 3 + 3 + 1).
So, the sum of count of each element is 14.*/

int main()
{
    int n,*arr,i,count=0,threshold;
    scanf("%d %d",&n,&threshold);
    arr = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
        if(*(arr+i)%threshold!=0)
            count++;
        count += *(arr+i)/threshold;
    }
    printf("%d",count);
}
