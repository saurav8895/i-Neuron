#include<stdio.h>

void swap(int *a,int *b){
    *a+=*b;
    *b=*a-*b;
    *a=*a-*b;
}
int main()
{
    int a=8,b=10;
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}