main()
{
    int index,dindex,num;
    scanf("%d",&num);
    int arr[num];
    for(index=0;index<num;index++){
        scanf("%d",&arr[index]);
    }
    for(index=0;index<num-1;index++){
        for(dindex=index+1;dindex<num;dindex++)
        {
            if(arr[index]>arr[dindex]){
                int temp=arr[index];
                arr[index] = arr[dindex];
                arr[dindex] = temp;
            }
        }
    }
    for(index=0;index<num;index++)
        printf("%d ",arr[index]);
}
