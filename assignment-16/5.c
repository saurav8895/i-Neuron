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
           if(i==j){
            sum+=a[i][j];
           }
        }
        
        /* code */
    }
    printf("%d",sum);
    return 0;
}