main()
{
    int num,index,iter,diter;
    scanf("%d",&num);
    int arr[num];
    for(index=0;index<num;index++){
        scanf("%d",&arr[index]);
    }
    for(index=0;index<num-2;index++){
        for(iter=index+1;iter<num-1;iter++){
            for(diter=iter+1;diter<num;diter++){
                if(arr[index]*arr[index] + arr[iter]*arr[iter] == arr[diter]*arr[diter]){
                    printf("yes");
                    exit(0);
                }
            }
        }
    }
    printf("no");
}
