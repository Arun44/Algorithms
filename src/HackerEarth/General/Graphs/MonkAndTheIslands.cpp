#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef list<ll> lil;
typedef queue<pll> qpll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define forn(i,a,b) for(sz i=a;i<=b;i++)
#define pb push_back
#define mp make_pair
lil *a;
class islands
{
    ll n,k,testno; ll tem1,tem2; vll visited;qpll wait; pll temp;
    bool r=true; ll ans;
    public:
    void inp()
    {
        cin >> testno;
        while(testno--)
        {
            cin >> n >> k;
            a = new lil[n+1];
            visited.pb(-1);
            forn(i,1,n)
            {
                visited.pb(-1);
            }
            forn(i,1,k)
            {
                cin >> tem1 >> tem2 ;
                a[tem1].pb(tem2); a[tem2].pb(tem1);
            }
            wait.push(mp(1,0));
            while(wait.empty()==false)
            {
                   temp = wait.front();wait.pop();
                   bfs(temp.first,temp.second);
                   if(r==false)
                   {
                       break;
                   }
            }
            cout << ans << endl;
            r=true; visited.clear(); a->clear();
            while(wait.empty()==false)
            {
                wait.pop();
            }
        }
    }
    void bfs(ll x,ll dis)
    {
         visited.at(x)=0;
         for(auto it=a[x].begin();it!=a[x].end();it++)
         {
                 if(visited.at(*it)==-1)
                 {
                      if(*it==n)
                      {
                          ans = dis + 1; r=false;
                          break;
                       }
                      wait.push(mp(*it,dis+1));
                      visited.at(*it)=0;
                 }
         }
         return;
    }
};
int main()
{
    islands a;
    a.inp();
    return 0;
}
