#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    a+=b;
    b=a-b;
    a-=b;
    cout<<a<<" "<<b;
    return 0;
}