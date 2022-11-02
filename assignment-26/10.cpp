#include<bits/stdc++.h>
using namespace std;

class static_count{
    public:
    static int count;
    void increase_count(){
        count++;
    }
};
int static_count::count;
int main()
{
    static_count s;
    s.increase_count();
    s.increase_count();
    s.increase_count();
    cout<<static_count::count;
    return 0;
}