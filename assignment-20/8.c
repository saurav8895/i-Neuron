#include<stdio.h>

int main()
{
    int a[5],sum=0;
    int *p;
    p=a;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",(p+i));
        sum+=*(p+i);
    }
    printf("%d",sum);
    return 0;
}