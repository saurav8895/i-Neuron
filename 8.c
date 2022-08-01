#include<stdio.h>
#include<stdlib.h>

int prime(int a);
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
    int n;
    printf("enter number");
    scanf("%d",&n);
    for (int i = n+1; ; i++)
    {
      if(prime(i)==0){
        continue;
      }
      printf("%d",i);
      exit(90);
    }
    
    return 0;
}