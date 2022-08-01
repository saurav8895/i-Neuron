#include<stdio.h>
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
 for (int i = 2; i<=100; i++)
 {
    if(prime(i))
    printf("%d\t",i);
 }
 return 0;
}