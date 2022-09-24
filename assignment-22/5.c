#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int *p=malloc(n*4);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",p+i);
        sum+=*(p+i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",*(p+i));
    }
    printf("%d",sum);
    free(p);
    
    return 0;
}