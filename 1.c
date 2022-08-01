#include<stdio.h>

int main()
{
    int n,first=0,second=1,third=0;
    printf("enter the position");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
      third=first+second;
      first=second;
      second=third;  
    }
    printf("%dth term is %d",n,third);
    return 0;
}