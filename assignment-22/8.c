#include<stdio.h>
int * dangling(){
    int a;
    scanf("%d",&a);
    printf("%d",a);
    return &a;
}
int main()
{
    int *p=dangling();
    printf("%d",*p);
    return 0;
}