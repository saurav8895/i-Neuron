#include<stdio.h>
#include<math.h>

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
    if(i==1)
    printf("%d and %d are co prime",a,b);
    else
    printf("%d and %d are not co prime",a,b);
    
    return 0;
}