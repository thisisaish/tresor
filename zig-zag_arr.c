main()
{
    int num,index,f=1,temp;
    scanf("%d",&num);
    int arr[num];
    for(index=0;index<num;index++){
        scanf("%d",&arr[index]);
    }
    for(index=0;index<num-1;index++){
        if(f){
            if(arr[index]>arr[index+1]){
                temp = arr[index];
                arr[index] = arr[index+1];
                arr[index+1] = temp;
            }
        }
        else
        {
            if(arr[index]<arr[index+1]){
                temp = arr[index];
                arr[index] = arr[index+1];
                arr[index+1] = temp;
            }

        }
        f=!f;
    }
    for(index=0;index<num;index++){
        printf("%d ",arr[index]);
    }
}
