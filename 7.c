#include<stdio.h>
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
int prime(int a){
    if(a==2)
    return 1;
    
    for(int i=2;i<a;i++){
        if(a%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
 for (int i = min(a,b); i<max(a,b); i++)
 {
    if(prime(i))
    printf("%d\t",i);
 }
 return 0;
}