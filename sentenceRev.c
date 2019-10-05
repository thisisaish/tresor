#include<stdio.h>
#include<string.h>

int main()
{
    char str[30];
    int begin=0,end;
    printf("Enter a sentence\n");
    scanf("%[^\n]s",str);
    end=1;
    while(str[begin]!='\0')
    {
        end = begin+1;
        while(str[end]!='.' && str[end]!='\0')
        {
            end++;
        }
        reverseString(str,begin,end-1);
        begin = end+1;
    }
    printf("\n%s\n",str);
}
void reverseString(char *s,int i,int j)
{
    while(i<j)
    {
       //         printf("*");
        char t = *(s+i);
        *(s+i) = *(s+j);
        *(s+j) = t;
        i++;
        j--;
    }
}
