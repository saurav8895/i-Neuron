#include<stdio.h>

void print(int n){
     if(n>=1){
        printf("%d\n",2*n);
        print(n-1);
     }
}
int main()
{
    int n;
    scanf("%d",&n);
    print(n);
    return 0;
}