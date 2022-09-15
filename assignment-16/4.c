#include<stdio.h>

int main()
{
    int a[3][3],sum=0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           scanf("%d",&a[i][j]);
            /* code */
        }
        
        /* code */
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           if(i==3/2 && j==3/2){
            sum=a[i][j]+a[i-1][j+1]+a[i+1][j-1];
           }
        }
        
        /* code */
    }
    printf("%d",sum);
    return 0;
}