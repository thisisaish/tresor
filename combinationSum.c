#include<stdio.h>
#include<stdlib.h>
int arr[10],n,sum;
//Given an array of integers A and a sum B, find all unique combinations in A where the sum is equal to B.
//each number in A may only be used once in the combination.

int combinations(int,int,int);

int main()
{
    int i,r=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        r += arr[i];
    }
    scanf("%d",&sum);
    printf("%d",combinations(0,1,r));
}
int combinations(int s,int k,int r)
{
    if(s+arr[k]==sum)
        return 1;
    else if(s+arr[k]+arr[k+1]<=sum)
        combinations(s+arr[k],k+1,r-arr[k]);
    else if(s+r-arr[k]>=sum && s+arr[k+1]<=sum)
        combinations(s,k+1,r-arr[k]);
}
