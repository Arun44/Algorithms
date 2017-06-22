#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef list<pll> li;
typedef priority_queue<pll,vector<pll>,greater<pll>> pqll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
li *att;li * att1;
class smuggle
{
    ll n,m,s,t,tem1,tem2,ans,weight; pll temp;
    bool k=true;bool p = false;
    vll dis1,dis2,dis3,dis4;
    pqll wait;
    public:
    void inp()
    {
        cin >> n >> m >> s >> t;
        dis1.pb(0);dis2.pb(0);dis3.pb(0);dis4.pb(0);
        forl(i,0,n)
        {
            dis1.pb(1e9);dis2.pb(1e9);dis3.pb(1e9);dis4.pb(1e9);
        }
        att = new li[n+1]; att1 = new li[n+1];
        forl(i,0,m)
        {
            cin >> tem1 >> tem2 >> weight;
            att[tem1].pb(mp(weight,tem2));
            att1[tem2].pb(mp(weight,tem1));
        }
        dis1[s]=0;wait.push(mp(0,s));
        while(wait.empty()==false)
        {
             temp = wait.top(); wait.pop();
             bfs(dis1);
        }
        dis2[t]=0;wait.push(mp(0,t));
        while(wait.empty()==false)
        {
             temp = wait.top(); wait.pop();
             bfs(dis2);
        }
        dis3[s]=0;wait.push(mp(0,s));
        while(wait.empty()==false)
        {
             temp = wait.top(); wait.pop();
             bfsrev(dis3);
        }
        dis4[t]=0;wait.push(mp(0,t));
         while(wait.empty()==false)
        {
             temp = wait.top(); wait.pop();
             bfsrev(dis4);
        }
        forl(i,1,n+1)
        {
            if ((i==s)||(i==t))
            {
                continue;
            }
            else
            {
                if ((dis1[i]!=1e9) && (dis2[i]!=1e9) && (dis3[i]!=1e9) && (dis4[i]!=1e9))
               {
                   p = true ;
                   if(k==true)
                   {
                      ans = dis1[i] + dis2[i] + dis3[i] + dis4[i] ;k=false;
                   }
                   else
                   {
                        if ((dis1[i] + dis2[i] + dis3[i] + dis4[i])<ans)
                        {
                            ans = (dis1[i] + dis2[i] + dis3[i] + dis4[i]);
                        }
                   }
               }
            }
        }
        if(p!=true)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
        
    }
    void bfs(vll &distance)
    {
        for(auto it=att[temp.second].begin();it!=att[temp.second].end();it++)
        {
                if(distance[it->second] > distance[temp.second] + it->first )
                {
                      distance[it->second] = distance[temp.second] + it->first;
                      wait.push(mp(distance[it->second],it->second));
                }
                else
                {
                    continue;
                }
        }
        return;
        
    }
    void bfsrev(vll &distance)
    {
        for(auto it=att1[temp.second].begin();it!=att1[temp.second].end();it++)
        {
                if(distance[it->second] > distance[temp.second] + it->first )
                {
                      distance[it->second] = distance[temp.second] + it->first;
                      wait.push(mp(distance[it->second],it->second));
                }
                else
                {
                    continue;
                }
        }
        return;
        
    }
};
int main()
{
    smuggle a;
    a.inp();
    return 0;
}
