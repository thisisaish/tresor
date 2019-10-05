#include<stdio.h>

int main()
{
    //removes all adjacent duplicate alphabets
    //eg: geeksforgeeks will become gksforgks
    char str[50],dupremoved[50];
    int i=0,index=0;
    scanf("%s",str);
    while(str[i]!='\0')
    {
        int j = i+1;
        if(str[i]==str[i+1])
        {
            //int j=i+1;
            while(str[i]==str[j])
                j++;
        }
        else
           dupremoved[index++] = str[i];
        i = j;
    }
    dupremoved[index]='\0';
    printf("%s",dupremoved);
}
