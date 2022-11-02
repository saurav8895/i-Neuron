#include<bits/stdc++.h>
using namespace std;
class bill{
    private:
     string name;
     string add;
     float units;
     public:
     bill(string n,string a,float u){name=n;add=a;units=u;}
     void calculate_bill()
     {
        if(units<=100)
          cout<<"total bill amount = "<<units*1.20<<endl;
        else if(units>100 && units<=200)
         cout<<"total bill amount = "<<units*2<<endl;
         else cout<<"total bill amount = "<<units*3<<endl;
     }
};
int main()
{
    string n,a;
    float u;
    cout<<"enter customer name "<<endl;
    getline(cin,n);
    cout<<"enter address"<<endl;
    getline(cin,a);
    cout<<"enter units"<<endl;
    cin>>u;
    bill b1(n,a,u);
    system("CLS");
    b1.calculate_bill();

    return 0;
}