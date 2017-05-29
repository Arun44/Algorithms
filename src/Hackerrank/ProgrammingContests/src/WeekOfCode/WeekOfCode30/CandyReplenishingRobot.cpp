#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
class party
{
    ll n,t,curr;ll op=0;vll att;ll temp;
    public:
    void gp()
    {
       cin >> n >> t;
       curr = n;
       forl(i,0,t)
       {
          cin >> temp; att.pb(temp);    
       }
       forl(i,1,t+1)
       {
          if(i!=t)
              {
                 curr = curr - att.at(i-1);
                 if(curr<5)
                 {
                     op  = op + (n-curr);
                     curr = curr + (n-curr);    
                 }
              
              }
       }
        cout << op << endl;
    }
};
int main() 
{
    party t;
    t.gp();
    return 0;
}

