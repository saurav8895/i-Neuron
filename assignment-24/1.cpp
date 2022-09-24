#include<iostream>
#include<conio.h>
using namespace std;

bool prime(int n){
    for (int i = 1; i <=n/2; i++)
    {
        if(n%1==0 && i!=1)
        return false;
    }
    return true;
    
}
int main()
{
    int n;
    cin>>n;
    if(prime(n))
    cout<<"yes";
    else cout<<"no";
    return 0;
}