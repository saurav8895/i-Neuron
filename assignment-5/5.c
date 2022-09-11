#include<stdio.h>

int main()
{
     int n,i=1;
    printf("enter value of n");
    scanf("%d",&n);
    for(int i=2*n-1;i>=0;i-=2)
    printf("%d\n",i);
    return 0;
}