#include<bits/stdc++.h>
using namespace std;

class fact{
    private:
    int n;
    public:
    int facto(int n1)
    {
        n=n1;
        if(n==1)
        return 1;
        else return n*facto(n-1);
    }
};
int main()
{
    fact f;
    cout<<f.facto(5);
    return 0;
}