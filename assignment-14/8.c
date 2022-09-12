#include<stdio.h>
void sort(int a[],int len){
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
    
}
int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
        /* code */
    }
    sort(a,10);
    printf("%d",a[1]);
    
    return 0;
}