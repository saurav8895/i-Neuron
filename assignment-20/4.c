#include<stdio.h>

int main()
{
    int a=8;
    int *ptr=&a;
    printf("value of a is %d\n",*ptr);
    printf("address of a is %u",ptr);
    return 0;
}