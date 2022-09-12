#include<stdio.h>

void print(int i,int n){
    if(i<=n)
   {
     print(i,n-1);
    printf("%d\n",n);
    }

}
int main()
{
    int n=10;
  print(1,n);
    return 0;
}