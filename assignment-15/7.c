#include<stdio.h>
int count(int a[],int length){
    int cnt=0;
    for (int i = 0; i <length-1; i++)
    {
        for (int j = i+1; j < length; j++)
        {
           if(a[i]==a[j]){
           cnt++;
           break;
           }

            /* code */
        }
        
        /* code */
    }
    return cnt;
}
int main()
{
    int n;
    printf("enter array length");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        /* code */
    }
    printf("%d",count(a,n));
    return 0;
}