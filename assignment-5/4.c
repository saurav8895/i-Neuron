#include<stdio.h>

int main()
{
     int n,i=1;
    printf("enter value of n");
    scanf("%d",&n);
    while(n){
        if(i%2!=0){
        printf("%d\n",i);
        i++;n--;
        }
        else
        i++;
        
    }
    return 0;
}