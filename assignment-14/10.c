#include<stdio.h>

int main()
{
    int a[10],b[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
        /* code */
    }
    for (int i = 0; i < 10; i++)
    {
        b[i]=a[i];
        printf("%d\n",b[i]);
        /* code */
    }
    
    return 0;
}