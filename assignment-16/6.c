#include<stdio.h>
#include<string.h>

int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int a[r][c];int row_sum[r];int col_sum[c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
            /* code */
        }
        
        /* code */
    }
    
    memset(row_sum,0,r*sizeof(row_sum[0]));
    memset(col_sum,0,c*sizeof(col_sum[0]));
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            row_sum[i]+=a[i][j];
            col_sum[j]+=a[i][j];
            /* code */
        }
        printf("\n");
        /* code */
    }
    printf("row sum\n");
    for (int i = 0; i < r; i++)
    {
        printf("%dth row sum = %d\n",i,row_sum[i]);
        /* code */
    }
    printf("col sum\n");
    for (int i = 0; i < c; i++)
    {
        printf("%dth col sum = %d\n",i,col_sum[i]);
        /* code */
    }
    
    
    return 0;
}