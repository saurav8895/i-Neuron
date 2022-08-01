#include<stdio.h>

int main()
{
    int n,first=0,second=1,third=0;
    printf("enter the number");
    scanf("%d",&n);
       if(n==first)
       printf("yes");
        while(third<=n){
      third=first+second;
      first=second;
      second=third;
      if(third==n)
      printf("yes"); 
      else 
       printf("no"); 
        }
    return 0;
}