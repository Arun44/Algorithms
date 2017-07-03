#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef list<pll> li;
typedef list<ll> lil;
typedef vector<ll> vll;
typedef priority_queue<pll,vector<pll>,greater<pll>> pqll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
li *a;lil *b;
class grph
{
    ll n,m,tem1,tem2,start,target,ans=1e9;
    pll temp;
    vll dis1,dis2;
    bool y = false;
    pqll wait;
    public:
    void inp()
    {
       cin >> n >> m;
       a = new li[n+1]; 
       b = new lil[n+1];
       dis1.pb(0); dis2.pb(0);
       forl(i,0,n)
       {
           dis1.pb(1e9); dis2.pb(1e9);
       }
       forl(i,0,m)
       {
           cin >> tem1 >> tem2 ;
           a[tem1].pb(mp(1,tem2));a[tem2].pb(mp(1,tem1));
       }
       cin >> start >> target ;
       dis1[start] = 0 ;  wait.push(mp(0,start));
       while(wait.empty()==false)
       {
            temp = wait.top(); wait.pop();
            bfs(dis1);
       }
       if(dis1[target]==1e9)  //if no path exists :)
       {
           cout << -1  << endl; return; 
       }
       dis2[target] = 0 ; wait.push(mp(0,target));
        while(wait.empty()==false)
       {
            temp = wait.top(); wait.pop();
            bfs(dis2);
       }
       
       forl(i,1,n+1)
       {
            if ((dis1[i]+dis2[i]==dis1[target]) && (dis1[i]!=1e9) && (dis2[i]!=1e9))
            {
                  b[dis1[i]].pb(i); 
            }
       }
      
       forl(i,1,n)
       {
              if(b[i].size()==1)
              {
                 
                  for(auto it=b[i].begin();it!=b[i].end();it++)
                  {
                       if ((*it!=start)&&(*it!=target))
                       {
                            y = true;
                            ans = min(ans,*it);
                       }
                  }
              }
       }
       if(y==true)
       {
       cout << ans << endl;
       }
       else
       {
           cout << -1 << endl;
       }
    }
    void bfs(vll &dist)
    {
         for(auto it=a[temp.second].begin();it!=a[temp.second].end();it++)
         {
               if(dist[it->second] > dist[temp.second] + it->first )
               {
                   dist[it->second] = dist[temp.second] + it->first;
                   wait.push(mp(dist[it->second], it->second));
               }
         }
         return ;
    }
};
int main()
{
    grph h;
    h.inp();
    return 0;
}
