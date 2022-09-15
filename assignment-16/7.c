#include<stdio.h>

int main()
{
    int r,c;
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
    printf("lower triangular matrix\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(i<j)
             break;
             else
             printf("%d",a[i][j]);
        }
        printf("\n");
        /* code */
    }
    
    
    return 0;
}