#include<stdio.h>
#include<math.h>

int digit(int n){
    int cnt=0;
    while(n>0){
        n=n/10;
        cnt++;
    }
    return cnt;
}
int main()
{
    int n,n1,sum=0;
    scanf("%d",&n);
    n1=n;
    int dig=digit(n);
    while(n>0){
        int rem=n%10;
        int res=1;
        int i=0;
         while(i<dig){
            res*=rem;
            i++;
         }
         sum +=res;
        //  sum +=pow(rem,dig);
         n/=10;
    }
    if(sum==n1)
    printf("yes");
    else
    printf("no");

    return 0;
}