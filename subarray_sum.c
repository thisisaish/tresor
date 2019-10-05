main()
{
    int n,dindex,index,sum1,sum;
    scanf("%d %d",&n,&sum);
    int arr[n];
    for(index=0;index<n;index++)
    {
        scanf("%d",&arr[index]);
    }
    for(index=0;index<n-1;index++)
    {
        sum1=arr[index];
        for(dindex=index+1;dindex<n;dindex++)
        {
            sum1+=arr[dindex];
            if(sum1>=sum)
                break;
        }
        if(sum1==sum)
        {
            printf("%d %d",index+1,dindex+1);
            break;
        }
    }
}
