int main()
{
    int num,count;
    scanf("%d",&num);
    for(int i=2;i<=sqrt(num);i++){
            count=0;
        while(num%i==0)
        {
            count++;
            num/=i;
        }
        if(count)
            printf("%d^%d\n",i,count);
    }
    if(num>1)
        printf("%d^1\n",num);
    return 0;
}
