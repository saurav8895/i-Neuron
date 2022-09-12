#include<stdio.h>
int fibb(int n){
   if(n==1 || n==0)
   return 1;
   else
   return fibb(n-1)+fibb(n-2);
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
   printf("%d\n",fibb(i));
    return 0;
}