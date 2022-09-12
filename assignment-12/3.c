#include<stdio.h>

void print(int n,int i){
    if(n<i){
     printf("%d\n",(2*n)+1);
     print(n+1,i);
    }
}
int main()
{
    int n,i;
    scanf("%d",&i);
    print(0,i);
    return 0;
}