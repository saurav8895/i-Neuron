#include<bits/stdc++.h>
using namespace std;

class times{
   private:
   int hour,min,sec;
   public:
   void setdata(int h,int m,int s)
   {
    hour=h;min=m;sec=s;
   }
   void printdata(times t)
   {
    cout<<t.hour<<" hours "<<t.min<<" minutes "<<t.sec<<" seconds "<<endl;
   }
};
int main()
{
  times t;
  t.setdata(3,45,20);
  t.printdata(t);
  
    return 0;
}