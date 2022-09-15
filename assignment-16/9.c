#include<stdio.h>

int main()
{
    int r,c,zcnt=0,ncnt=0;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
            /* code */
        }
        
        /* code */
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
           if(a[i][j]==0)
           zcnt++;
           else
           ncnt++;
        }
        
        /* code */
    }
    if(zcnt>ncnt)
    printf("it is a sparse matrix");
    else
    printf("it is not a sparse matrix");

    
    return 0;
}