#include<stdio.h>

int main()
{
    char str[20],palin[20];
    int first=0,last,index=0;
    scanf("%s",str);
    last=strlen(str)-1;
    //for even length of strings
    while(first<last)
    {
        if(str[first]==str[last])
        {
            palin[index++]=str[first];
            //first++;
            last--;
        }
        first++;
    }
    printf("%s",palin);
    printf("%s",strrev(palin));
    /*for(index=0;palin[index]!='\0';index++)
    {
        printf("%c",palin[index]);
    }
    for(index-=1;index>=0;index--)
        printf("%c",palin[index]);*/
}
