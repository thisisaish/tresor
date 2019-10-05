#include<stdio.h>
#include<malloc.h>

//Given an array A of N length. We need to calculate the next greater element for each element in given array.
//If next greater element is not available in given array then we need to fill ‘_’ at that index place.
//9
//6 3 9 8 10 2 1 15 7
//7 6 10 9 15 3 2 _ 8

int main()
{
    int n,*arr,index,max_index=0;
    scanf("%d",&n);
    arr = (int*)malloc(n*sizeof(int));
    for(index=0;index<n;index++)
    {
        scanf("%d",arr+index);
        if(index>0 && *(arr+max_index)<*(arr+index))
            max_index = index;
    }
    for(index=0;index<n;index++)
    {
        if(index==max_index)
            printf("_ ");
        else{
            int i = index+1,diff=999;
            while(i%n != index)
            {
                if(*(arr+(i%n))-*(arr+index)>0 && *(arr+(i%n))-*(arr+index)<diff)
                    diff = *(arr+(i%n)) - *(arr+index);
                i++;
            }
            printf("%d ",*(arr+index)+diff);
        }
    }
}
