#include <bits/stdc++.h>
using namespace std;

class box
{
private:
    float len, bre, hei;

public:
    box(float l, float b, float h)
    {
        len = l;
        bre = b;
        hei = h;
    }
    void volume() { cout << "volume is " << len * bre * hei << endl; }
};
int main()
{
    float l, b, h;
    cout << "enter length,breadth and height " << endl;
    cin >> l >> b >> h;
    box b1(l, b, h);
    b1.volume();


    return 0;
}