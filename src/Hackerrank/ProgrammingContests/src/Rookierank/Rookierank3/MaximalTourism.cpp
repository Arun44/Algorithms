#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef list<ll> lil;
typedef vector<ll> vll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
//#define forn(i,a,b) for(sz i=a;i<=b;i++)
#define pb push_back
#define mp make_pair
lil *a;
class tour
{
    ll no,m,tem1,tem2;vll visited;vll ans;ll count=0;
    public:
    void inp()
    {
        cin >> no >> m;
        a = new lil[no+1];
        visited.pb(-1);
        for(ll i=1;i<=no;i++)
        {
             visited.pb(-1);    
        }
        for(ll i=1;i<=m;i++)
        {
           cin >> tem1 >> tem2;
           a[tem1].pb(tem2);a[tem2].pb(tem1);
          // cout << "united" << endl;
        }
        for(ll i=1;i<=no;i++)
        {
            if(visited.at(i)==-1)
            {
               dfs(i); 
               count = count + 1;
               //cout << "the value is" << count << endl;
               ans.pb(count);
               count = 0;
            }
        }
        sort(ans.begin(),ans.end(),greater<ll>());
        cout << ans.at(0) << endl;
    }
    void dfs(ll x)
    {
        visited.at(x)=0;
        for(auto it=a[x].begin();it!=a[x].end();it++)
        {
               if(visited.at(*it)==-1)
               {
                   count = count + 1;visited.at(*it)=0; 
                   dfs(*it);
               }
        }
        return;
    }
};
int main() 
{
    tour t;
    t.inp();
    return 0;
}

