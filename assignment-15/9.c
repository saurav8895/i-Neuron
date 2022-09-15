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
void merge(int a[],int b[],int len){
    int temp[len];
    sort(a,len/2);
    sort(b,len/2);
    int i=0,j=0, k=0;
    while(i<(len/2) && j<(len/2))
    {
        if(a[i]>b[i])
        {
            temp[k]=a[i];
            k++;
            i++;
        }
        else
        {
            temp[k]=b[i];
            k++;j++;
        }
    }
    while(i<(len/2)){
        temp[k]=a[i];
        k++;i++;
    }
    while(j<(len/2)){
        temp[k]=b[j];
        k++;j++;
    }
    for (int i = 0; i < len; i++)
    {
        /* code */printf("%d\n",temp[i]);
    }
    
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
        /* code */
    }
    merge(a,b,2*n); 
    
    return 0;
}