#include<stdio.h>

int hcf(int a,int b){
    while(a!=b){
        if(a>b){
        return hcf(a-b,b);
              }
        else
        return hcf(a,b-a);
    }
    return a;
}
int main()
{
    
    int a,b;
    scanf("%d",&a,&b);
    printf("%d",hcf(a,b));
    return 0;
}