#include<stdio.h>
#include<string.h>

char* removeDuplicates(char*);
//not recursive
int main()
{
    char str[20];
    scanf("%s",str);
    printf("The string obtained after recursively removing adjacent duplicates:\n");
    removeDuplicates(str);
}
char* removeDuplicates(char *s)
{
    char res[20];
    int i,j=0,len=strlen(s);
    for(i=1;i<len;i++){
        if(*(s+(i-1))!=*(s+i))
            res[j++]=*(s+(i-1));
        else{
            while(*(s+(i-1))==*(s+i))
                i++;
            //i-=1;
        }
    }
    res[j++] = *(s+(i-1));
    res[j] = '\0';
    printf("%s",res);
}
