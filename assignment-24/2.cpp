#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n;int rem;int max=0;
    cin>>n;
    while(n>0){
        rem=n%10;
        if(max<=rem)
        max=rem;
        n/=10;
    }
    cout<<max;
    return 0;
}