#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef list<ll> lil;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<=b;i++)
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
lil *a;
class graph
{
      ll n,m,tem1,tem2; vll visited;ll noedges=0;
      vll ans;
      public:
      void inp()
      {
          cin >> n >> m;
          visited.pb(-1);
          forn(i,1,n)
          {
              visited.pb(-1); 
          }
          a = new lil[n+1];
          forn(i,1,m)
          {
              cin >> tem1 >> tem2;
              a[tem1].pb(tem2);
              a[tem2].pb(tem1);
               
          }
          forn(i,1,n)
          {
              if(visited.at(i)==-1)
              {
                      dfs(i);
                      //cout << noedges << endl;
                      ans.pb(noedges/2);
                      noedges = 0;
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
                   noedges = noedges + 1;
                   if(visited.at(*it)==-1)
                   {
                        dfs(*it);   
                   }
                   
           }
           return ;
      }
};
int main()
{
    graph g;
    g.inp();
    return 0;
}
