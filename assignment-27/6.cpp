#include<bits/stdc++.h>
using namespace std;

class cstring{
    string s1;
    public:
    cstring(string s){s1=s;}
    cstring(){}
    friend bool operator==(cstring &c1,cstring &c2);
     void display(){cout<<s1<<endl;}
    friend cstring operator+(cstring &c1,cstring &c2);
};
   cstring operator+(cstring &c1,cstring &c2)
   {
     cstring temp;
     temp.s1=c1.s1+c2.s1;
     return temp;
   }

   bool operator==(cstring &c1,cstring &c2)
   {
    if(c1.s1==c2.s1)
    return true;
    else return false;
   }
int main()
{
    cstring c1("Saurav "),c2("Samal");
    (c1+c2).display();
    if(c1==c2)
    cout<<"both the strings are equal."<<endl;
    else cout<<"not same."<<endl;
    return 0;
}