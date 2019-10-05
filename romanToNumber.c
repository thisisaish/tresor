#include<stdio.h>

int numEquivalent(char);
//MCMIV 1904
int main()
{
    int i,decinum=0;
    char roman[7];
    scanf("%s",roman);
    for(i=strlen(roman)-1;i>=0;i--)
    {
        if(i==strlen(roman)-1)
        {
            decinum = numEquivalent(roman[i]);
        }
        else if(decinum>numEquivalent(roman[i])){
            decinum -= numEquivalent(roman[i]);
        }

        else{
            decinum += numEquivalent(roman[i]);
        }
    }
    printf("%s: %d\n",roman,decinum);
}
int numEquivalent(char r)
{
    if(r=='I')
        return 1;
    if(r=='V')
        return 5;
    if(r=='X')
        return 10;
    if(r=='L')
        return 50;
    if(r=='C')
        return 100;
    if(r=='D')
        return 500;
    if(r=='M')
        return 1000;
}
