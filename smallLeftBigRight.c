#include<stdio.h>
#include<stdlib.h>
//prints the element in an array whose right side elements are smaller and left elements are greater than that element
int main()
{
    int n,i,*arr,j,k;
    scanf("%d",&n);
    arr = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",arr+i);
    for(i=1;i<n-1;i++){
        for(j=i-1;j>=0;j--){
            if(*(arr+i)<*(arr+j))
                break;
        }
        for(k=i+1;k<n;k++){
            if(*(arr+i)>*(arr+k))
                break;
        }
        if(j<0 && k==n){
            printf("%d",*(arr+i));
            break;
        }
    }
    if(i==n-1)
        printf("-1");
    return 0;
}
