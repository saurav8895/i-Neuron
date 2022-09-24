#include<iostream>
#include<conio.h>
using namespace std;

int power(int x,int y){
    int res=1;
    while(y--){
        res*=x;
    }
    return res;
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<power(x,y);
    return 0;
}