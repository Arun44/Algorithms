#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef list<ll> lil;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define forn(i,a,b) for(sz i=a;i<=b;i++)
#define pb push_back
#define mp make_pair
lil *a;
class game
{
    ll count=1; ll no,tem1,tem2,noque,type,x,y; vll visited,start,stop;
    public:
    void inp()
    {
       ios_base::sync_with_stdio(false);
       cin >> no;
       a = new lil[no+1];
       visited.pb(-1); start.pb(-1) ; stop.pb(-1);
       forn(i,1,no)
       {
           visited.pb(-1); start.pb(-1) ; stop.pb(-1);
       }
       forn(i,1,no-1)
       {
           cin >> tem1 >> tem2 ;
           a[tem1].pb(tem2);
       }
       forn(i,1,no)
       {
           if(visited.at(i)==-1)
           {
                 dfs(i);
           }
       }
       cin >> noque;
       while(noque--)
       {
           cin >> type >> x >> y;
           if(type==0) // bob is moving upwards :)
           {
                 if((start[y]>start[x])&&(stop[y]<stop[x]))
                 {
                     cout << "YES" << endl;
                 }
                 else
                 {
                     cout << "NO" << endl;
                 }
           }
           else
           {
               if((start[y]<start[x])&&(stop[y]>stop[x]))
                 {
                     cout << "YES" << endl;
                 }
                 else
                 {
                     cout << "NO" << endl;
                 }
               
           }
       }
    }
    void dfs(ll x)
    {
        visited[x]=1;
        start[x]=count;
        for(auto it=a[x].begin();it!=a[x].end();it++)
        {
             if(visited.at(*it)==-1)
             {
                  visited[*it]=1;
                  count = count + 1;
                  dfs(*it);
             }
        }
        count = count + 1;
        stop[x]=count;
        return;
    }
};
int main()
{ 
    game g;
    g.inp();
    return 0;
}