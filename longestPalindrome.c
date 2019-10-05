#include<malloc.h>
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,n;
    int maxLength,**table,start;
    char str[100];
    scanf("%s",str);
    n = strlen(str);
    table = (int**)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        *(table+i) = (int*)calloc(n,sizeof(int));
        *(*(table+i)+i) = 1;
    }
    //for substrings of length 2
    maxLength = 2;
    for(i=0;i<n-1;i++){
        if(str[i]==str[i+1]){
            start = i;
            *(*(table+i)+(i+1)) = 1;
        }
    }
    //for sub-strings greater than length 3
    for(k=3;k<=n;k++)
    {
        for(i=0;i<n-k+1;i++)
        {
            j = i+k-1;
            if(*(*(table+(i+1))+(j-1)) && str[i]==str[j])
            {
                *(*(table+i)+j) = 1;
                if(maxLength < k)
                {
                    start = i;
                    maxLength  = k;
                }
            }
        }
    }
    for(i=start;i<start+maxLength;i++)
        printf("%c",str[i]);

}
