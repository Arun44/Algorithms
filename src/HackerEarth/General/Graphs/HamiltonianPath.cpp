#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef list<ll> li;
typedef vector<ll> vll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
li *att;
class path
{
    ll n,m,tem1,tem2; ll count = 0;vll visited; bool p = false;
    public:
    void inp()
    {
        cin >> n >> m;
        att = new li[n];
        forl(i,0,n)
        {
            visited.pb(-1);
        }
        forl(i,0,m)
        {
           cin >> tem1 >> tem2 ;
           att[tem1].pb(tem2); att[tem2].pb(tem1);
        }
        forl(i,0,n)
        {
            dfs(i);
            if(p==true)
            {
                cout << "YES" << endl;
                break;
            }
            else
            {
                count = 0;
                visited.clear();
                forl(i,0,n)
                {
                   visited.pb(-1);
                }
            }
        }
        if(p==false)
        {
            cout << "NO" << endl;
        }
    }
    void dfs(ll x)
    {
           visited[x]=0;
          count = count + 1;
          if(count == n)
          {
              p = true;
              return;
          }
          for(auto it=att[x].begin();it!=att[x].end();it++)
          {
                 if(visited[*it]==-1)
                 {
                     dfs(*it);
                     if(p==true)
                     {
                         return;
                     }
                 }
          }
          count = count - 1;
          return;
    }
};
int main()
{
    path a;
    a.inp();
    return 0;
}
