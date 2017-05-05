#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
typedef long long ll;
typedef map<ll,ll> mpll;
typedef mpll:: iterator mit;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
class rt
{ 
    ll n,temp;mpll att;mit vit;ll m=-1;ll ind;
    public:
    void gp()
    {
         cin >> n;
         forl(i,0,n)
         {
               cin >> temp;
               if(att.count(temp)==0)
               {
                   att[temp]=1;    
               }
              else
              {
                   att[temp]=att[temp] + 1;    
              }
         }
         for(vit=att.begin();vit!=att.end();vit++)
         {
                if(vit->second > m)
                {
                      ind = vit->first;
                      m = vit ->second;
                }
         }
        cout << ind << endl;
    }
    
};
int main() 
{
    rt t;
    t.gp();
    return 0;
}


