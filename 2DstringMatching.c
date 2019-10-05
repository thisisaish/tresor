#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//incorrect
void findLeft(char**,char*);
void findDown(char**,char*);

int main()
{
    char **grid,pattern[10];
    int n,m;
    scanf("%d %d",&n,&m);
    grid = (char**)malloc(n*sizeof(char));
    for(int i=0;i<n;i++){
        *(grid+i) = (char*)malloc(m*sizeof(char));
            scanf("%s",*(grid+i));
    }
    scanf("%s",pattern);
    findDown(grid,pattern);
    findLeft(grid,pattern);
    return 0;
}

void findLeft(char **grid,char *pat)
{
    int i,j,n = strlen(pat),k,start;
    for(i=0;*(grid+i)!='\0';i++){
        for(j=0;j<strlen(*(grid+i))-n+1;j++){
            if(grid[i][j]==pat[0]){
                    start = j;
                for(k=0;k<n;k++){
                    if(pat[k]!=grid[i][j++])
                        break;
                }
                if(k==n)
                    printf("%d %d,",i,start);
            }
        }
    }
}

void findDown(char **grid,char *pat)
{
    /*int i,j,len = strlen(*(grid+0)),n=strlen(pat),start,k;
    for(j=0;j<len;j++){
        for(i=0;*(*(grid+(i+n-1))+j)!='\0';i++){
            if(grid[i][j]==pat[0]){
                start = i;
                for(k=0;k<n;k++)
                {
                    if(pat[k]!=grid[i++][j])
                        break;
                }
                if(k==n)
                    printf("%d %d,",start,j);
            }
        }
    }*/
    int i,j,n = strlen(pat),k,start;
    for(i=0;*(grid+i)!='\0';i++){
        for(j=0;j<strlen(*(grid+i))-n+1;j++){
            if(grid[j][i]==pat[0]){
                    start = j;
                for(k=0;k<n;k++){
                    if(pat[k]!=grid[j++][i])
                        break;
                }
                if(k==n)
                    printf("%d %d,",start,i);
            }
        }
    }
}
