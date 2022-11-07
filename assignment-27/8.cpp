#include<bits/stdc++.h>
using namespace std;

class Matrix
{
int a[3][3];
 public:
 Matrix(){memset(a,0,sizeof(a));}
 void display()
 {
   for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    } 
 }
 friend Matrix operator>>(istream &is,Matrix &m); 
 friend Matrix operator-(Matrix &m);
//methods;
};
 Matrix operator>>(istream &is,Matrix &m)
 {
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>m.a[i][j];
        }
        
    }
    return m;
 }

 Matrix operator-(Matrix &m)
 {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m.a[i][j]*=-1;
        }
        
    }
    return m;
 }
int main()
{
    Matrix m1,m2;
    cin>>m1;
    (-m1).display();
    

    return 0;
}