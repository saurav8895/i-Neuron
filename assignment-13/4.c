#include<stdio.h>
#include<math.h>

double sum(int n){
    if(n==1)
    return 1;
    else
    return pow(n,2)+sum(n-1);
}
int main()
{
    int n=10;
   printf("%.f",sum(n));
    return 0;
}