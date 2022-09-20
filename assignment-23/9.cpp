#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
    int a[10],sum=0;
    for (int i = 0; i <10; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    
    
    cout<<sum;
    return 0;
}