#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
class year
{
    ll n;
    public:
    void gp()
    {
      cin >> n;
      if((n>=1700)&&(n<=1917))
      {
          if(n%4==0)
          {
             cout << 12 <<"."<<"09"<<"." <<n << endl;   
          }
          else
          {
               cout << 13 <<"."<<"09"<<"." <<n << endl;
          }
      }
      else if((n>=1919)&&(n<=2700))
      {
          if((n%400==0) || ((n%4==0)&&(n%100!=0)))
          {
              cout << 12 <<"."<< "09" <<"." <<n << endl;
          }
          else
          {
               cout << 13 <<"."<< "09" <<"." <<n << endl;
          }
      }
       else
       {
            cout << 26 <<"."<<"09"<<"." <<n << endl;
       }
    }
    
};
int main() 
{
    year y;
    y.gp();
    return 0;
}

