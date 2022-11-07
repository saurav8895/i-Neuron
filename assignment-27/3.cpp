#include<bits/stdc++.h>
using namespace std;
class complexx{
    int a,b;
    public:
    complexx(int x,int y){a=x;b=y;}
    complexx(){}
    friend complexx operator+(complexx c1,complexx c2);
    friend ostream& operator<<(ostream &os,complexx &c1);
    void display(){cout<<a<<"+"<<b<<"i"<<endl;}
};
 ostream& operator<<(ostream &os,complexx &c1)
   {
    os<<c1.a<<"+"<<c1.b<<"i"<<endl;
    return os;
   }
    complexx operator+(complexx c1,complexx c2)
    {
        complexx temp;
        temp.a=c1.a+c2.a;
        temp.b=c1.b+c2.b;
        return temp;
    }
int main()
{
    complexx c1(1,2),c2(3,4);
    cout<<c1<<c2;
     (c1+c2).display();
    return 0;
}