#include<bits/stdc++.h>
using namespace std;
int max(int a,int b){
  return (a>b)?a:b;
}
float max(float a,float b){
  return (a>b)?a:b;
}
int main()
{
    int a,b,c;
    float a1,b1;
    cout<<"1:inter\n2:real\n";
    cin>>c;   
    switch (c)
    {
    case 1:/* constant-expression */
        cin>>a>>b;
        cout<<max(a,b);/* code */
        break;
    case 2:/* constant-expression */
        cin>>a1>>b1;
        cout<<(float)max(a1,b1);/* code */
        break;
    
    default:
        break;
    }
    return 0;
}