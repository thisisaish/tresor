#include<stdio.h>
//counts how far the array is close from being sorted
//with the help of selection sort which uses minimum number of swaps
// we can give the inversion count of the array by counting the number of swaps involved
int main()
{
    int n,*arr,i,invC=0;
    scanf("%d",&n);
    arr = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",arr+i);
    for(i=0;i<n-1;i++){
            int min = i;
        for(int j=i+1;j<n;j++){
            if(*(arr+j)<*(arr+min))
                min = j;
        }
        if(min!=i)
        {
            invC++;
            int t = *(arr+i);
            *(arr+i) = *(arr+min);
            *(arr+min) = t;
        }
    }
    printf("%d",invC);
}
