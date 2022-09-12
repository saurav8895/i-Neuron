#include<stdio.h>
static int cnt;
int count(int n){
    if(n>0){
       cnt++;
       count(n/10);
    }
    return cnt;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",count(n));
    return 0;
}