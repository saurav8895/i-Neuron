#include<stdio.h>
void rev(int *p,int len){
    int temp;
  for (int i = 0; i <= len; i++)
  {
    if(i<=((len-1)/2))
         {
            temp=p[i];
            p[i]=p[len-i];
            p[len-i]=temp;
         }
  }
  
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
    rev(a,n-1);
    for (int i = 0; i < n; i++)
    {
       printf("%d\n",a[i]);
        /* code */
    }
    
    return 0;
}