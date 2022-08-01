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

int armstrong(int n){
     int n1,sum=0;
    // scanf("%d",&n);
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
    printf("%d\n",n1);
    // else
    // printf("no");
}
int main()
{
    int n=0;
    for(int i=0;i<1000;i++){
        armstrong(i);
    }

    return 0;
}