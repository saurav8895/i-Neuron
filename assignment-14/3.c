#include<stdio.h>


int main()
{
   int a[10];int esum=0;int osum=0;
   for(int i=0;i<10;i++){
   scanf("%d",&a[i]);    
     if(a[i]%2==0)
     esum+=a[i];
     else
     osum+=a[i];
   }
   printf("esum= %d osum= %d",esum,osum); 
    return 0;
}