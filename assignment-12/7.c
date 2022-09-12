#include<stdio.h>
#include<math.h>

void print(int n,int i){
     if(n<=i){
        printf("%d ^ 2 = %.f\n",n,pow(n,2));
        print(n+1,i);
     }
}
int main()
{
    int n,i;
    scanf("%d",&i);
    print(1,i);
    return 0;
}