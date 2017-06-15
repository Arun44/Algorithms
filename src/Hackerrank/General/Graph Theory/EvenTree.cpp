#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef list<ll> lil;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
lil *a;
class even
{
    ll n,m,tem1,tem2; ll count = 0 ;ll numnodes; vll visited;
    public:
    void inp()
    {
        cin >> n >> m;
        visited.pb(-1);
        forl(i,0,n)
        {
            visited.pb(-1);    
        }
        a = new lil[n+1];
        forl(i,0,m)
        {
            cin >> tem1 >> tem2;
            a[tem1].pb(tem2); a[tem2].pb(tem1);
        }
        dfs(1);
        cout << count << endl;
    }
    ll dfs(ll x)
    {
        visited[x]=0;
        ll numvertex = 0;
        for(auto it=a[x].begin();it!=a[x].end();it++)
        {
             if(visited[*it]==-1)
             {
                   numnodes=dfs(*it); 
                   if(numnodes%2==0)
                   {
                       count = count + 1;    
                   }
                   else
                   {
                       numvertex = numvertex + numnodes;    
                   }
             }
        }
        return numvertex+1;
    }
};
int main() 
{
    even n;
    n.inp();
    return 0;
}
