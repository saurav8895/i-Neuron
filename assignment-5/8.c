#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("enter n");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    printf("%d ^ 2 = %.f\n",i,pow(i,2));
    return 0;
}