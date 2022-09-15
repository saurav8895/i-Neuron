#include<stdio.h>

int find(int a[],int len){
    for (int i = 0; i < len; i++)
    {
        if(a[i]==a[i+1] && (i+1)<len)
        return a[i];
        /* code */
    }
    printf("no adjacency");
    return 0;
    
}
int main()
{
    int n;
    printf("enter array length");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] :",i);
        scanf("%d",&a[i]);
        /* code */
    }if(find(a,n))
    printf("%d",find(a,n));
    
    return 0;
}