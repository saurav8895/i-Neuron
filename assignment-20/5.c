#include<stdio.h>

int main()
{
    int a=5,b=6;
    int *p;
    *p=a;
    a=b;
    b=*p;
    printf("a=%d b=%d",a,b);
    return 0;
}