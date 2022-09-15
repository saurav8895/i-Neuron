#include<stdio.h>
#include<string.h>

int main()
{
     int r,c,zcnt[r],max=0;
    scanf("%d %d",&r,&c);
    memset(zcnt,0,r*sizeof(zcnt[0]));
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
            /* code */
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
           if(a[i][j]==1)
           zcnt[i]++;
        }
    }
    for (int i = 0; i < r; i++)
    {
        if(max<zcnt[i])
        max=zcnt[i];
        /* code */
    }
    printf("%dth row having maximum 1s",max);
    
        
    return 0;
}