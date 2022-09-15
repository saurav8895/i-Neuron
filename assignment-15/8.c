#include<stdio.h>
int count(int a[],int length){
    int cnt=0,j=0;
    for (int i = 0; i <length; i++)
    {
        for (j = 0; j < length; j++)
        {
           if(a[i]==a[j] && i!=j){
           break;
           }
            /* code */
        }
        if(j==length)
            cnt++;
        
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
 