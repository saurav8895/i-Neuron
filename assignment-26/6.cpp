#include <bits/stdc++.h>
using namespace std;

class student
{
    string name;
    string roll;
    string address;
    float marks;

public:
    student(string n, string r, string ad, float m)
    {
        name = n;
        roll = r;
        address = ad;
        marks = m;
    }
    void print_details()
    {
        cout << "NAME- " << name << "\nROLL- " << roll << "\nADDRESS- " << address << "\nMARKS- " << marks << endl;
    }
};
int main()
{
    string n, r, ad;
    float m;
    cout << "enter name ";
    getline(cin,n);
    cout << "enter roll ";
    getline(cin,r);
    cout<<"enter address ";
    cin>>ad;
    cout<<"enter marks ";
    cin>>m;
    student s(n,r,ad,m);
    system("CLS");
    s.print_details(); 
    return 0;
}