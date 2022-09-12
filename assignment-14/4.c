#include<stdio.h>


int main()
{
   int a[10];int grtst=0;
   for(int i=0;i<10;i++){
   scanf("%d",&a[i]);    
     if(a[i]>=grtst)
     grtst=a[i];
   }
   printf("%d",grtst); 
    return 0;
}