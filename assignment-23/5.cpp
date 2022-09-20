#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
float avg(int a,int b,int c){
    return (float)(a+b+c)/3;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<avg(a,b,c);
    return 0;
}