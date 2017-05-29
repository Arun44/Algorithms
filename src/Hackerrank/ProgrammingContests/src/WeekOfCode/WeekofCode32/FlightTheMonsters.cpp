#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
class hit
{
      ll count  = 0;ll nodie=0;ll n,hit,t;vll a;ll temp;
      public:
      void inp()
      {
          cin >> n >> hit  >> t;
          forl(i,0,n)
          {
              cin >> temp ; a.pb(temp);    
          }
          sort(a.begin(),a.end());
          forl(i,0,a.size())
          {
               if(a.at(i)<=hit)
               {
                  nodie = nodie + 1;
                  count = count + 1;
                  if(count==t)
                  {
                      break;    
                  }
                  
               }
               else
               {
                    if(a.at(i)%hit == 0)
                    {
                        count = count + a.at(i)/hit;
                        if ((count>t)||(count==t))
                        {
                              if(count>t)
                                   {
                                    break;
                                   }
                                 else
                                 {
                                      nodie = nodie + 1;break;   
                                 }
                        }
                        else
                        {   
                            nodie = nodie + 1;
                        }
                    }
                    else 
                    {
                        count = count + ((a.at(i)/hit)+1);
                        if ((count>t)||(count==t))
                        {
                              if(count>t)
                                   {
                                    break;
                                   }
                                 else
                                 {
                                      nodie = nodie + 1;break;   
                                 }
                        }
                        else
                        {   
                            nodie = nodie + 1;
                        }
                    }
               }
          }
          cout << nodie << endl;
      }
};
int main() 
{
    hit h;
    h.inp();
    return 0;
}

