main()
{
    int index,f_sum,sum=0,mid,num;
    scanf("%d",&num);
    int arr[num];
    for(index=0;index<num;index++)
    {
        scanf("%d",&arr[index]);
        sum+=arr[index];
    }
    if(num==1){
        printf("%d",arr[0]);
        exit(0);
    }
    for(mid=1;mid<num-1;mid++)
    {
        f_sum=0;
        for(int findex=0;findex<mid;findex++){
            f_sum+=arr[findex];
        }
        if(f_sum == (sum-f_sum-arr[mid])){
            printf("%d",mid+1);
            break;
        }
    }
}
