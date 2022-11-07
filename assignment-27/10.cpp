#include<bits/stdc++.h>
using namespace std;

class matrix{
    int a[3][3];
    public:
    matrix(){memset(a,0,sizeof(a));}
    friend matrix operator>>(istream &is,matrix &m);
    matrix operator+(matrix &m)
    {
        matrix temp;
        for (int i = 0; i < 3; i++)
       {
       for (int j = 0; j < 3; j++)
       {
         temp.a[i][j]=a[i][j]+m.a[i][j];
       }
           
       }
       return temp;
    }
    void display()
    {
        for (int i = 0; i < 3; i++)
       {
       for (int j = 0; j < 3; j++)
       {
         cout<<a[i][j]<<" ";
       }
           cout<<endl;
       }
    }

};
       matrix operator>>(istream &is,matrix &m)
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
int main()
{
    matrix m1,m2,m3;
    cout<<"enter matrix 1"<<endl;
    cin>>m1;
    cout<<"enter matrix 2"<<endl;
    cin>>m2;
   m3=m1+m2;
   m3.display();
    


    return 0;
}