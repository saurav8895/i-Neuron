#include<stdio.h>
int * sort(int *a,int len){
    int temp;
    for (int i = 1; i < len; i++)
    {
        for (int j = 0; j < len-i; j++)
        {
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

            /* code */
        }
        
        /* code */
    }
    return a;
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
    int *p=sort(a,n);
     for (int i = 0; i < n; i++)
    {
        scanf("%d",p[i]);
        /* code */
    }
    return 0;
}