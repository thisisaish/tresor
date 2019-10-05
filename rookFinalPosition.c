#include<stdio.h>
#include <stdlib.h>
int min(int a, int b){
    return a < b ? a: b;
}
int main()
{
    int N, rowPos, colPos;
    scanf("%d\n", &N);
    char (*board)[N] = malloc(sizeof(char) * (N*N));
    int (*left)[N] = malloc(sizeof(int) * (N*N));
    int (*right)[N] = malloc(sizeof(int) * (N*N));
    int (*top)[N] = malloc(sizeof(int) * (N*N));
    int (*bottom)[N] = malloc(sizeof(int) * (N*N));
    for(int row=0; row<N; row++)
    {
        for(int col=0; col<N; col++)
        {
            scanf("%c", &board[row][col]);
            if(board[row][col] == 'R'){
                rowPos = row;
                colPos = col;
            }
            if(board[row][col] == '-')
            {
                top[row][col] = left[row][col] = -1;
            }
            else
            {
                if(col == 0)
                {
                    left[row][col] = 0;
                }
                else
                {
                    left[row][col] = left[row][col-1] + 1;
                }
                if(row == 0)
                {
                    top[row][col] = 0;
                }
                else
                {
                    top[row][col] = top[row-1][col] + 1;
                }
            }
        }
        if(row!=N-1)
        {
            scanf("\n");
        }
    }
    for(int row = N-1; row>=0; row--)
    {
        for(int col = N-1; col>=0; col--)
        {
            if(board[row][col] == '-')
            {
                bottom[row][col] = right[row][col] = -1;
            }
            else
            {
                if(col == N-1)
                {
                    right[row][col] = 0;
                }
                else
                {
                    right[row][col] = right[row][col+1] + 1;
                }
                if(row == N-1)
                {
                    bottom[row][col] = 0;
                }
                else
                {
                    bottom[row][col] = bottom[row+1][col] + 1;
                }
            }
        }
    }
    int M, pos;
    char direction;
    scanf("%d", &M);
    while(M--){
        scanf("\n%c%d", &direction, &pos);
        if(direction == 'L'){
            colPos -= min(left[rowPos][colPos], pos);
        }else if(direction == 'R'){
            colPos += min(right[rowPos][colPos], pos);
        }else if(direction == 'A'){
            rowPos -= min(top[rowPos][colPos], pos);
        }else{
            rowPos += min(bottom[rowPos][colPos], pos);
        }
        //printf("%d %d\n", rowPos+1, colPos+1);
    }
    printf("%d %d", rowPos+1, colPos+1);
}
