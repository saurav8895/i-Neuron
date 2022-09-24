#include<iostream>
#include<conio.h>
using namespace std;
void add(int c,int a=1,int b=2){
    cout<<a+b+c;

}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    add(c,a);
    return 0;
}