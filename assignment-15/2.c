#include<stdio.h>

int find(int a[],int n){
    int small=__INT_MAX__;
  
     for(int i=0;i<n;i++){
     if(small>=a[i])
     small=a[i];
   }
   return small;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
     for(int i=0;i<n;i++){
   scanf("%d",&a[i]);    
}
printf("%d",find(a,n));
    return 0;
}