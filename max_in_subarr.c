main()
{
    int num,index,lindex,sizeOfSubarr;
    scanf("%d %d",&num,&sizeOfSubarr);
    int arr[num];
    for(index=0;index<num;index++){
        scanf("%d",&arr[index]);
    }
    for(index=0;index<num-sizeOfSubarr+1;index++){
        int max = arr[index];
        for(lindex=index+1;lindex<index+sizeOfSubarr;lindex++){
            if(max<arr[lindex])
                max = arr[lindex];
        }
    printf("%d ",max);
    }
}
