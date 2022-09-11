#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("enter n");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    printf("%d ^ 3 = %.f\n",i,pow(i,3));
    return 0;
}