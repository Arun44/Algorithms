#include <iostream>
#include <vector>
#include <iterator>
#include <map>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef map<ll,ll> mpll;
typedef map<ll,ll>::iterator mit;
#define forl(i,a,b) for(ll i=a;i<b;i++)
#define forn(i,a,b) for(ll i=a;i<=b;i++)
#define pb push_back
class rt
{
    ll n,temp; vll att; ll t1,t2,t3;mpll mu;mit it;ll su;
    public:
    void gp()
    {
        cin >> n;
        forl(i,0,n)
        {
            cin >> temp; att.pb(temp);
        }
        rev();
    }
    void rev()
    {
        forn(i,0,att.size()-3)
        {
            t1=att.at(i);
            forn(k,i+1,att.size()-2)
            {
                t2=att.at(k);
                forn(p,k+1,att.size()-1)
                {
                    t3=att.at(p);
                    su = t1+t2+t3;
                    if(mu.count(su)==0)
                    {
                        mu[su]=su;
                    }
                }
            }
              
        }
        for(it=mu.begin();it!=mu.end();it++)
        {
            cout << it->second  << " " ;
        }
    }
    
};
int main()
{  
    rt t;
    t.gp();
    return 0;
}