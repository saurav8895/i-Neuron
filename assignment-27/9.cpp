#include<bits/stdc++.h>
using namespace std;

class mystring
{
char str [100];
 public:
  friend mystring operator>>(istream &is,mystring &m);
  void operator!()
  {
    for (int i = 0;str[i]; i++)
    {
      str[i]=tolower(str[i]); 
    }
    
  }
  void display()
  {
    cout<<str<<endl;
  }
};
     mystring operator>>(istream &is,mystring &m)
  {
    is>>m.str;
    return m;
  }
int main()
{
    mystring m;
    cin>>m;
    !m;
    m.display();
    return 0;
}