#include<bits/stdc++.h>
using namespace std;

class complexx{
   private:
   int a,b;
   public:
   void setdata(int a1,int b1)
   {
    a=a1;b=b1;
   }
   void printdata(complexx c)
   {
    cout<<c.a<<"+"<<c.b<<"i "<<endl;
   }
};
int main()
{
    complexx c;
    c.setdata(23,5);
    c.printdata(c);
    return 0;
}