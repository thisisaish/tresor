main()
{
    int sum=0,num,index;
    scanf("%d",&num);
    int arr[num];
    for(index=0;index<num-1;index++)
    {
        scanf("%d",&arr[index]);
        sum+=arr[index];
    }
    int actual_sum=(num*(num+1))/2;
    printf("Missing number is %d",actual_sum-sum);
}
