#include<bits/stdc++.h>
using namespace std;

class largest{
    private:
    int a,b,c;
    public:
    void set(int a1,int b1,int c1){a=a1;b=b1;c=c1;}
    int largest_finder(){return max(max(a,b),c);}
};
int main()
{   
    int a,b,c;
    cin>>a>>b>>c;
    largest l;
    l.set(a,b,c);
    cout<<l.largest_finder();
    return 0;
}