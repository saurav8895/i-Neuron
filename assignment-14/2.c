#include<stdio.h>


int main()
{
   int a[10];float sum=0;
   for(int i=0;i<10;i++){
   scanf("%d",&a[i]);    
     sum=sum+a[i];
   }
   printf("%.1f",sum/10); 
    return 0;
}