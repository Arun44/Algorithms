#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef list<ll> lil;
typedef stack<ll> stll;
typedef set<ll> sll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
lil *a;lil *b;
class walk
{
    ll n,m,tem1,tem2,temp; vll visited,rvisited,parent;
    stll wait; sll att;
    public:
    void inp()
    {
        cin >> n >> m;
        a = new lil[n+1]; b = new lil[n+1];
        visited.pb(-1);rvisited.pb(-1);parent.pb(-1);
        forl(i,1,n+1)
        {
            visited.pb(-1);rvisited.pb(-1);parent.pb(-1);
        }
        forl(i,0,m)
        {
            cin >> tem1 >> tem2 ; a[tem1].pb(tem2); b[tem2].pb(tem1);
        }
        forl(i,1,n+1)
        {
            if(visited[i]==-1)
            {
                dfs(i);
            }
        }
        while(wait.empty()==false)
        {
              temp = wait.top();wait.pop();
              if(rvisited[temp]==-1)
              {
                    rdfs(temp);
                    if(att.size()==1)
                    {
                        parent[temp]=-1;
                    }
                    att.clear();
              }
        }
        forl(i,1,n+1)
        {
            if(parent[i]!=-1)
            {
                cout << 1 << " " ;
            }
            else
            {
                cout << 0 << " " ;
            }
        }
    }
    void dfs(ll x)
    {
        visited[x]=0;
        for(auto it=a[x].begin();it!=a[x].end();it++)
        {
              if(visited[*it]==-1)
              {
                  visited[*it]=0;
                  dfs(*it);
              }
        }
        wait.push(x); // stack to keep track of the finishing order of nodes :)
    }
    void rdfs(ll x)
    {
        rvisited[x]=0;
        for(auto it=b[x].begin();it!=b[x].end();it++)
        {
              if(rvisited[*it]==-1)
              {
                  parent[*it]=1;
                  att.insert(*it);
                  rvisited[*it]=0;
                  rdfs(*it);
              }
        }
        parent[x]=1;
        att.insert(x);
    }
};
int main()
{
    walk w;
    w.inp();
    return 0;
}
