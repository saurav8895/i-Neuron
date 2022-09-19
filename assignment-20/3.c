#include<stdio.h>

void sort(int *p,int n){
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j <n ; j++)
        {
            if(*(p+i)>=*(p+j)){
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
    
}
int main()
{
    int n;
    printf("enter length");
    scanf("%d",&n);
     int a[n];
     for (int i = 0; i <n; i++)
     {
        scanf("%d",&a[i]);
     }
     sort(a,n);
     for (int i = 0; i < n; i++)
     {
        printf("%d\n",a[i]);
     }
     

    return 0;
}