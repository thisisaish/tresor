#include<stdio.h>
#include<math.h>

int countDigit(long int);
void permutation(long int,long int);

int main()
{
    long int num,t;
    scanf("%ld %ld",&num,&t);
    permutation(num,t);
}

int countDigit(long int n)
{
    int count=0;
    while(n){
        count++;
        n/=10;
    }
    return count;
}
void permutation(long int n,long int t)
{
    long int num = n,c=0;
    int n1 = countDigit(n);
    while(1){
        int rem = num%10;
        int div = num/10;
        num = (pow(10,n1-1))*rem + div;
        c++;
        if(c==t-1)
        {
            printf("%ld",num);
            break;
        }
    }
}
