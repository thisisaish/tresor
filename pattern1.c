#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,j,index;
    char str[100];
    scanf("%s",str);
    n = strlen(str);
    for(i=0;i<n;i++){
            index = (n/2)+1;
        for(j=0;j<=((n-1)*2)-i;j++){
            if(j>= ((n-1)*2)-(i*2))
                printf("%c",str[index++%n]);
            else
                printf(" ");
        }
        printf("\n");
    }
}
