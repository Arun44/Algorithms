#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long ll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
class pr
{
   bool p=true;ll temp;
   public:
   void inp()
   {
      while(p==true)
      {
          cin >> temp;
          if(temp!=42)
          {
             cout << temp << endl;
          }
          else
          {
              p=false;
          }
      }
      
   }
   
};
int main()
{
    pr p;
    p.inp();
    return 0;
}

