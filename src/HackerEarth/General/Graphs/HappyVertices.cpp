#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef list<ll> lil;
typedef set<ll> s;
typedef s::iterator sit;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define forn(i,a,b) for(sz i=a;i<=b;i++)
#define pb push_back
#define mp make_pair
lil *a;
class happy
{
   ll n,m,tem1,tem2,temp,par;ll ans=0;
   vll visited,parent,count; s sp; sit mit;
   public:
   void inp()
   {
       cin >> n >> m;
       visited.pb(-1); parent.pb(-1);count.pb(-1);
       forn(i,1,n)
       {
           visited.pb(-1);parent.pb(i);count.pb(0);
       }
       a = new lil[n+1];
       forn(i,1,m)
       {
           cin >> tem1 >> tem2 ;
           a[tem1].pb(tem2);a[tem2].pb(tem1);
       }
       forn(i,1,n)
       {
           if(visited.at(i)==-1)
           {
               sp.insert(i);
               dfs(i);
               for(mit =sp.begin();mit!=sp.end();mit++)
               {
                     temp = *mit;
                     if(parent[temp]!=temp)
                     {
                         par = parent[temp];
                         if(count[temp]>count[par])
                         {
                             ans = ans + 1;
                         }
                     }
               }
           }
           sp.clear();
       }
       cout << ans << endl;
   }
   void dfs(ll x)
   {
       visited.at(x)=0;
       for(auto it=a[x].begin();it!=a[x].end();it++)
       {
             if(visited.at(*it)==-1)
             {
                  sp.insert(*it);
                  parent[*it]=x;count[x]=count[x]+1;
                  visited.at(*it)=0;
                  dfs(*it);
             }
       }
       return ;
   }
};
int main()
{
    happy p;
    p.inp();
    return 0;
}
