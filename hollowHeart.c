#include<stdio.h>

int main()
{
    int n,i,j,row,col,c,k=0;
    char brac = ')',name[]={'e','n','i','y','a','n','i','l','a','v','a','n'};
    scanf("%d",&n);
    row = (2*n)-1;
    col = (n*4)+(((n*2)-2)*4);
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            if(i+j == (n*2) || i+j == (n+1)*(n+2))
            {
                if(i==(2*n)-1 && j>i)
                    printf(")");
                else
                    printf("(");
            }
            else if(j-i== (2*row)-1 || j-i == col-row)
            {
                if(i==(n*2)-1 && j>i &&j!=col)
                    printf("(");
                else
                    printf(")");
            }
            else if((i==1 && (((j<=(row+n)+1 && j>=row))||(j>=row*4 && j<=(row*4)+n))))
            {
                printf("%c",brac);
                if(brac==')')
                    brac = '(';
                else
                    brac = ')';
            }
            else if(i==2 && ((j>=3 && j<=6)||(j>=11 && j<=14)))
                printf("%c",name[k++%12]);
            else if(i==3 && ((j>=2 && j<=7)||(j>=10 && j<=15)))
                printf("%c",name[k++%12]);
            else
                printf(" ");
        }printf("\n");
    }
    row = ((n+1)*n)+1;
    c= (2*n)-2;
    for(i=2*n;i<=(row+(c+1));i++){
        for(j=1;j<=col;j++)
        {
            if(i-j==c)
                printf("(");
            else if(i+j==((2*n)+col)-1)
                printf(")");
            else if(i+j >= (i*2)-1 && i+j<=18)
                printf("%c",name[k++%12]);
            else
                printf(" ");
        }
        printf("\n");
    }
}
