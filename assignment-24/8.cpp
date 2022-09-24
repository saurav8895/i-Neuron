#include<bits/stdc++.h>
using namespace std;

float area(float r){
    return (3.14*r*r);
}
float area(float len,float bre){
    return (len*bre);
}
float area(int base,int height){
    return 0.5*base*height;
}
int main()
{
    int s;float r,len,bre,base,hei;
    cout<<"1:circle\n2:rectangle\n3:triangle\nenter your choise\n";
    cin>>s;
    switch (s)
    {
    case 1:
         cin>>r;
        cout<<area(r);
        break;
    case 2:
        cin>>len>>bre;
        cout<<"area of rectangle is :"<<area(len,bre);
        break;
    case 3:
        cin>>base>>hei;
        cout<<"area of triangle is :"<<area(base,hei);
        break;
    
    default:
        break;
    }
    return 0;
}