#include<bits/stdc++.h>
using namespace std;

class times{
    int hour,min,sec;
    public:
    times(int h,int m,int s){hour=h;min=m;sec=s;}
    times(){}
    bool operator==(times t)
    {
        if(t.hour==hour && t.min==min && t.sec==sec)
        return true;
        else return false;
    }
    friend times operator>>(istream &is,times t);
    friend ostream& operator<<(ostream &os,times &t);
};
    times operator>>(istream &is,times t)
    {
        cout<<"enter hours :"<<endl;
        is>>t.hour;
        cout<<"enter minutes :"<<endl;
        is>>t.min;
        cout<<"enter seconds :"<<endl;
        is>>t.sec;
        return t;
    }
    ostream& operator<<(ostream &os,times &t)
    {
        cout<<t.hour<<"Hrs"<<t.min<<"Mins"<<t.sec<<"Sec"<<endl;
        return os; 
    }

int main()
{
    times t1(1,23,45);
    times t2;
    cout<<"first time"<<endl;
    cout<<t1;
    cout<<"enter second time"<<endl;
    t2=(cin>>t2);
    if(t1==t2)
    cout<<"yes both the times are same"<<endl;
    else cout<<"both are not same"<<endl;
    return 0;
}