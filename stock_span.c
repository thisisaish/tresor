main()
{
    int num,index,prev;
    scanf("%d",&num);
    int arr[num],span[num];
    for(index=0;index<num;index++){
        scanf("%d",&arr[index]);
    }
    for(index=0;index<num;index++){
            span[index]=1;
        for(prev=index-1;prev>=0;prev--){
            if(arr[prev]>arr[index])
                break;
            span[index]+=1;
        }
    }
    for(index=0;index<num;index++){
        printf("%d ",span[index]);
    }
}
