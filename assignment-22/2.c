#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;int sum=0;
    scanf("%d",&n);
    int *a=(int*)malloc(sizeof(int));
     for (int i = 0; i < n; i++)
     {
        scanf("%d",a+i);
        sum+=*(a+i);
     }
      printf("sum is %d",sum);
     
    return 0;
}