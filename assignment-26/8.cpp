#include<bits/stdc++.h>
using namespace std;
class bank{
    float principal;
    float rate;
    float time;
    public:
    bank(float p,float r,float t){principal=p;rate=r;time=t;}
    void simple_intrest()
    {
        cout<<(principal*time*rate)/100<<endl;
    }
};
int main()
{
    float p,r,t;
    cout<<"enter principal,rate and time "<<endl;
    cin>>p>>r>>t;
    bank b1(p,r,t);
    b1.simple_intrest();
    return 0;
}