#include<stdio.h>
#include<string.h>
int * count(int a[],int len){
    int cnt[len];
    memset(cnt,0,len*sizeof(cnt[0]));
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (i!=j && a[i]== a[j])
            {
                cnt[i]++;
                /* code */
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
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int *ptr=count(a,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d:%d\n",a[i],ptr[i]);
        /* code */
    }
    
    return 0;
}