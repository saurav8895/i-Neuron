#include<stdio.h>

void print(int n,int i){
    if(n<i){
     printf("%d\n",2*n);
     print(n+1,i);
    }
}
int main()
{
    int n,i;
    scanf("%d",&i);
    print(1,i);
    return 0;
}