#include<bits/stdc++.h>
using namespace std;
class inc{
    int a,b;
    public:
    inc(int a1,int b1){a=a1;b=b1;}
    inc(){}
    inc operator++()
    {
       inc temp;
        cout<<"pre increment :"<<endl;
        temp.a=++a;
        temp.b=++b;
        return temp; 
    }
    inc operator++(int useless)
    {
        inc temp;
        cout<<"post increment :"<<endl;
        temp.a=a++;temp.b=b++;
        return temp;
    }
    inc operator--()
    {
        inc temp;
        cout<<"post increment :"<<endl;
        temp.a=a-1;temp.b=b-1;
        return temp;
    }
    inc operator--(int useless)
    {
        inc temp;
        cout<<"pre increment :"<<endl;
        temp.a=a--;temp.b=b--;
        return temp;
    }
   friend ostream& operator<<(ostream &os,inc &i);
   void display()
   {
    cout<<a<<" "<<b<<endl;
   }
};
   ostream& operator<<(ostream &os,inc &i)
   {
    os<<i.a<<" "<<i.b<<endl;
    return os;
   }
int main()
{
    inc i1(3,4),i2;
    (i1++).display();
    (++i1).display();
    
    (i1--).display();
    (--i1).display();

    return 0;
}