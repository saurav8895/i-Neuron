#include<stdio.h>

int find(int a[],int len){
    int great=0;
    for (int i = 0; i < len; i++)
    {
        if(a[i]>=great)
        great=a[i];
        /* code */
    }
    return great;
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        /* code */
    }
    printf("%d",find(a,n));
    
    return 0;
}