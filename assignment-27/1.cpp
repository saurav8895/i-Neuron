#include<bits/stdc++.h>
using namespace std;
class ope{
    int a,b;
    public:
    ope(int a1,int b1){a=a1;b=b1;}
    ope(){}
    ope operator+(ope i)
    {
       ope temp;
       temp.a=a+i.a;
       temp.b=b+i.b;
        return temp; 
    }
    ope operator-(ope i)
    {
        ope temp;
       temp.a=a-i.a;temp.b=b-i.b;
        return temp;
    }
    ope operator*(ope i)
    {
        ope temp;
       temp.a=a*i.a;
       temp.b=b*i.b;
        return temp;
    }
    bool operator==(ope i)
    {
        if(i.a==a&&i.b==b)
        return true;
        else return false;
    }
   friend ostream& operator<<(ostream &os,ope &i);
   void display()
   {
    cout<<a<<" "<<b<<endl;
   }
};
   ostream& operator<<(ostream &os,ope &i)
   {
    os<<i.a<<" "<<i.b<<endl;
    return os;
   }
int main()
{
    ope i1(2,3),i2(4,5);
    (i1+i2).display();
   (i1-i2).display();
    (i1*i2).display();
    if(i1==i2)
    cout<<"both are same"<<endl;
    else 
    cout<<"not same"<<endl;


    return 0;
}