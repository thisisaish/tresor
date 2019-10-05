#include<stdio.h>

int main()
{
    int num,prime1;
    scanf("%d",&num);
    if(num%2==0)
        prime1 = 3;
    else
        prime1 = 2;
    for(;prime1 < num;prime1++)
    {
        if(isprime(prime1)&&isprime(num-prime1))
        {
            printf("%d %d",prime1,num-prime1);
            printf("yes");
            return 0;
        }
    }
    printf("no");
    return 0;
}
int isprime(int n)
{
    int limit = sqrt(n);
    for(int i=2;i<=limit;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
