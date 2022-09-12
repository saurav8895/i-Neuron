#include<stdio.h>


int main()
{
   int a[10];int small=__INT_MAX__;
   for(int i=0;i<10;i++){
   scanf("%d",&a[i]);    
     if(small>=a[i])
     small=a[i];
   }
   printf("%d",small); 
    return 0;
}