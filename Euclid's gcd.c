int main()
{
    int num1,num2,gcd;
    scanf("%d\n%d",&num1,&num2);
    gcd = compute(num1,num2);
    printf("G.C.D: %d",gcd);
    return 0;
}
int compute(int a,int b)
{
    return b == 0 ? a : compute(b,a%b);
}
