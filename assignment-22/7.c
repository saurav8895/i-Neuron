#include<stdio.h>
#include<stdlib.h>

void leak(){
    int *p;
    p=(int *)malloc(4);
    scanf("%d",p);
    printf("%u",*p);
}
int main()
{
    leak();
    return 0;
}