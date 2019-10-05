#include<stdio.h>
#include<malloc.h>

/*Given a array of N strings, find the longest common prefix among all strings present in the array.
4
geeksforgeeks geeks geek geezer
3
apple ape april
output
gee
ap*/

int main()
{
    char str[20][20];
    int words,i;
    scanf("%d",&words);
    for(i=0;i<words;i++)
        scanf("%s",str[i]);
    for(i=0;str[0][i]!='\0';i++)
    {
        for(int j=1;j<words;j++){
            if(str[0][i]!=str[j][i])
                return 0;
        }
        printf("%c",str[0][i]);
    }
}
