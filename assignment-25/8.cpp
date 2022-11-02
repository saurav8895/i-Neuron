#include<bits/stdc++.h>
using namespace std;
class rect{
    private:
    float len,bre;
    public:
    void set(float l,float b){len=l;bre=b;}
    float area(){return len*bre;}
};
int main()
{
    rect r;
    r.set(34,56);
    cout<<r.area()<<endl;  
    return 0;
}