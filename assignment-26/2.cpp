#include<bits/stdc++.h>
using namespace std;

class Time{
    int hour,min,sec;
    public:
    void settime(int h,int m,int s){hour=h;min=m;sec=s;}
    void printtime(){cout<<hour<<"hrs"<<min<<"mins"<<sec<<"secs"<<endl;}
    void normalize(){}
    Time addtime(Time t)
    {
        Time temp;
        temp.hour=hour+t.hour;
        temp.min=min+t.min;
        temp.sec=sec+t.sec;
        return temp;
    }
};
int main()
{
    Time t1,t2;
    t1.settime(1,23,45);
    t2.settime(2,34,10);
    t1.printtime();
    t2.printtime();
    t1.addtime(t2).printtime();
    return 0;
}