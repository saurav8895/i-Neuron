#include<bits/stdc++.h>
using namespace std;

class Complex{
    private:
    int a,b;
    public:
    void setdata(int a1,int b1){a=a1;b=b1;}
    void printdata(){cout<<a<<" + "<<b<<"i "<<endl;}
    Complex add(Complex c1)
    {
        Complex temp;
        temp.a=a+c1.a;
        temp.b=b+c1.b;
        return temp;
    }
};
int main()
{
    Complex c1,c2,c3;
    c1.setdata(2,3);
    c1.printdata();
    c2.setdata(4,5);
    c2.printdata();
    c2.add(c1).printdata();
    return 0;
}