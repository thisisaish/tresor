#include<stdio.h>

int safestPerson(int,int);

int main()
{
    int persons,kill;
    scanf("%d",&persons);
    scanf("%d",&kill);
    printf("%d",safestPerson(persons,kill)+1);
    return 0;
}
int safestPerson(int n,int kill)
{
    if(n==1)
        return 0;
    return (safestPerson(n-1,kill)+kill)%n;
}
