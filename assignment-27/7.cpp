#include<bits/stdc++.h>
using namespace std;

class fraction
{
long numerator;
long denominator;
 public:
fraction (long n=0, long d=0){numerator=n;denominator=d;}
fraction operator++()//pre increment
{
    fraction f;
    f.numerator=++numerator;f.denominator=++denominator;
    return f;
}

fraction operator++(int useless)//post increment
{
    fraction f;
    f.numerator=numerator++;f.denominator=denominator++;
    return f;
}

fraction operator--()//pre decrement
{
    fraction f;
    f.numerator=--numerator;f.denominator=--denominator;
    return f;
}

fraction operator--(int useless)//post increment
{
    fraction f;
    f.numerator=numerator--;f.denominator=denominator--;
    return f;
}
void display(){cout<<numerator<<"/"<<denominator<<endl;}
  friend fraction operator>>(istream &is,fraction &f);
  friend ostream & operator<<(ostream &os,fraction f);

};
  ostream & operator<<(ostream &os,fraction f)
  {
     cout<<f.numerator<<"/"<<f.denominator<<endl;
     return os;
  }
  fraction operator>>(istream &is,fraction &f)
  {
    cout<<"Numerator :";
      is>>f.numerator;
    cout<<"Denominator :";
      is>>f.denominator;
      return f;
  }

int main()
{
    fraction f1,f2;
    cout<<f1<<f2;
    cin>>f1;
    cin>>f2;
    (++f1).display();
    (--f1).display();
    (f1++).display();
    (f1--).display();
    (++f2).display();
    (--f2).display();
    (f2++).display();
    (f2--).display();


    return 0;
} 