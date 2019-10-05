int main()
{
    //partially correct
    int num,max=0,max_ind,dindex;
    scanf("%d",&num);
    int index,arr[num],sum[num],ind[num];
    for(index=0;index<num;index++){
        scanf("%d",&arr[index]);
        sum[index]=arr[index];
    }
    for(index=1;index<num;index++){
        for(dindex=0;dindex<index;dindex++){
            if(arr[dindex]<arr[index] && sum[dindex]<sum[dindex]+arr[index]){
                sum[index]+=arr[dindex];
                ind[index]=dindex;
            }
        }
    }
    for(index=0;index<num;index++){
        if(max<sum[index]){
            max = sum[index];
            max_ind = index;
        }
    }
    printf("sum:%d \n",max);
    for(index=0;index<max_ind;index++){
        if(ind[index]<max_ind){
            printf("%d\t",arr[ind[index]]);
        }
    }
}
