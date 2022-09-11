#include<stdio.h>

int main()
{
    int n;
    printf("enter n");
    scanf("%d",&n);
    for(int i=0;i<10;i++){
    printf("%d * %d = %d\n",n,i+1,(i+1)*n);
    }
    return 0;
}