main()
{
    int num,index,iter;
    scanf("%d",&num);
    int arr[num];
    for(index=0;index<num;index++){
        scanf("%d",&arr[index]);
    }
    for(index=0;index<num;index++){
        for(iter=index+1;iter<num;iter++){
            if(arr[index]<arr[iter]){
                printf("%d ",arr[iter]);
                break;
            }
        }
        if(iter==num)
            printf("-1 ");
    }
}
