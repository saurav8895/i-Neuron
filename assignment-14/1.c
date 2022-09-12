#include<stdio.h>


int main()
{
   int a[10];int sum=0;
   for(int i=0;i<10;i++){
   scanf("%d",&a[i]);    
     sum=sum+a[i];
   }
   printf("%d",sum); 
    return 0;
}