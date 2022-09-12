#include<stdio.h>
void rev(int a[],int len){
    int temp;
    for (int i = 0; i < len; i++)
    {
        if(i<=(len)/2){
        temp=a[i];
        a[i]=a[len-i];
        a[len-i]=temp;
        }
        else
        return;
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
    rev(a,9);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",a[i]);
        /* code */
    }
   
    
    return 0;
}