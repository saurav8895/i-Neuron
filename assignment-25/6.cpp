#include<bits/stdc++.h>
using namespace std;
class square{
  private:
  int n;
  public:
  void set(int n1){n=n1;}
  int sq(){return n*n;}
};
class Count{
    private:
    public:
    static int a;
    void fun(int n){
        if(n>0)
        {
            n--;
            a++;
            fun(n);
        }
    }
};
int Count::a;
int main()
{
    square s;
    s.set(5);
    cout<<s.sq()<<endl;
    Count c;
    c.fun(5);
    cout<<Count::a<<endl;

    return 0;
}