#include <bits/stdc++.h>
using namespace std;

class Reverse
{
private:
    int num;

public:
    void set(int n) { num = n; }
    int rev()
    {
        int res = 0, rem = 0;
        while (num > 0)
        { 
            rem = num % 10;
            res=res*10+rem;
            num/=10;
        }
        return res;
    }
};
int main()
{
    Reverse r;
    r.set(153);
    cout<<r.rev()<<endl;
    return 0;
}