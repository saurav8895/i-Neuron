#include<stdio.h>

int main()
{
    int a[3][3];int temp[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           scanf("%d",&a[i][j]);
           temp[i][j]=a[i][j];
            /* code */
        }
        
        /* code */
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[i][j]=temp[j][i];
            /* code */
        }
        
        /* code */
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           printf("%d",a[i][j]);
        }
        printf("\n");
        
        /* code */
    }
    
    return 0;
}