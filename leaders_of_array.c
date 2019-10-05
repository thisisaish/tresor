main()
{
    int num,index,dindex;
    scanf("%d",&num);
    int arr[num];
    for(index=0;index<num;index++){
        scanf("%d",&arr[index]);
    }
    for(index=0;index<num;index++){
        for(dindex=index+1;dindex<num;dindex++){
            if(arr[index]<=arr[dindex]){
                break;
            }
        }
        if(dindex==num)
            printf("%d ",arr[index]);
    }
}
