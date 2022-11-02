#include<bits/stdc++.h>
using namespace std;

class date{
    int day,mon,year;
    public:
    date(int d,int m,int y){day=d;mon=m;year=y;}
    void printdate()
    {
        cout<<day<<"/"<<mon<<"/"<<year<<endl;
    }
};
int main()
{
    date d(25,03,2001);
    d.printdate();
    return 0;
}