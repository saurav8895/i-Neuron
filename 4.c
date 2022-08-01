#include<stdio.h>
#include<math.h>

int max(int a,int b){
    if(a>b)
    return a;
    else 
    return b;
}
int min(int a,int b){
    if(a<b)
    return a;
    else 
    return b;
}
int main()
{
    int a,b,i;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    for(i=min(a,b);i>0;i--){
        if(a%i==0 && b%i==0)
        break;
    }
    printf("hcf of %d and %d is :%d",a,b,i);
    return 0;
}