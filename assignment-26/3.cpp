#include<bits/stdc++.h>
using namespace std;

class cubes{
    int side;
    public:
    cubes(int s){side=s;}
    void printarea(){cout<<"area ="<<pow(side,3)<<endl;}
};
int main()
{
    cubes c(3);
    c.printarea();

    return 0;
}