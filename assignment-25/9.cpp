#include<bits/stdc++.h>
using namespace std;
class circle{
    private:
    float rad;
    public:
    void set(float r){rad=r;}
    float area(){return 3.14*rad*rad;}
};
int main()
{
    circle c;
    c.set(3.4);
    cout<<c.area()<<endl;  
    return 0;
}