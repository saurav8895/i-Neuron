#include<bits/stdc++.h>
using namespace std;

class numbers{
    int x,y,z;
    public:
    numbers(int a,int b,int c){x=a;y=b;z=c;}
    numbers(){}
    friend void operator-(numbers &n);
    friend ostream& operator<<(ostream &os,numbers n);
};
    void operator-(numbers &n)
    {
       n.x*=-1;
       n.y*=-1;
       n.z*=-1;
    }
    ostream& operator<<(ostream &os,numbers n)
    {
        os<<"x ="<<n.x<<"\ny ="<<n.y<<"\nz ="<<n.z<<endl;
        return os;
    }
int main()
{
    numbers n(2,3,4);
    -n;
    cout<<n;
    return 0;
}