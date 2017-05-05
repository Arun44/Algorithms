#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;
class op
    {
     ll n,p,temp;vector<ll> inp;ll count=0;
    public:
    void create()
        {
        cin >> n >> p;
        for(int i=0;i<n;i++)
            {
            cin >> temp;
            inp.push_back(temp);
        }
        for(unsigned int i=0;i<inp.size();i++)
            {
                if((inp.at(i))%p == 0)
                    {
                    inp.at(i) = inp.at(i)/p ;
                }
            else 
                {
                   
                 inp.at(i) = (inp.at(i)/p)+1 ;
            }
        }
        sort(inp.begin(),inp.end());
        calc();
        prin();
    }
    void calc()
        {
          count=inp.at(0);
          for(unsigned int i=1;i<inp.size();i++)
              {
                 if(inp.at(i)>inp.at(i-1))
                     {
                     count=count+inp.at(i);
                 }
              else
                  {
                  inp.at(i)=inp.at(i-1)+1;
                  count=count+inp.at(i);
              }
          }
    }
    void prin()
        {
        cout << count ;
    }
};
int main() 
{
    op o;
    o.create();
    return 0;
}

