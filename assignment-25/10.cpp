#include<bits/stdc++.h>
using namespace std;

class Area{
   public:
   int area(float r){return 3.14*r*r;}
   int area(int l,int b){return l*b;}
   int area(int s){return s*s;}

};
int main()
{
    Area a;
    cout<<"area of circle "<<a.area(3.2f)<<endl;
    cout<<"area of rectangle "<<a.area(3,5)<<endl;
    cout<<"area of square "<<a.area(8)<<endl;
    return 0;
}