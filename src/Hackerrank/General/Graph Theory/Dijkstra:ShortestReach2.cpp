#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef priority_queue<pll,vector<pll>,greater<pll>> qpll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vpll> vl;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
class dist
{
    ll testno,n,m,tem1,tem2,weight ; vl a; vll distance,visited; pll temp; qpll wait;ll starting;
    public:
    void inp()
    {
        cin >> testno;
        while(testno--)
        { 
            cin >> n >> m;
            a.clear();a.resize(n+1);
            distance.assign(n+1,1000000000);
            visited.assign(n+1,-1);
            /*
            forl(i,0,distance.size())
            {
                cout << distance[i] << endl;
            }*/
            forl(i,0,m)
            {
                cin >> tem1 >> tem2 >> weight;
                a[tem1].pb(mp(weight,tem2));
                a[tem2].pb(mp(weight,tem1));
            }
            /*
            for(int i=0;i<=n;i++)
            {
                for(int j=0;j<a[i].size();j++)
                {
                    cout << i << " " << a[i][j].first << " " << a[i][j].second <<" ";
                    cout << endl;
                }
                cout << endl;
            }*/
            cin >> starting ;
            distance[starting]=0;
            wait.push(mp(0,starting));
            while(wait.empty()==false)
            {
                temp = wait.top();
                wait.pop();
                if(visited[temp.second]==-1)
                {
                    djik();
                }
                else
                {
                    continue;
                }
                visited[temp.second]=0;
            }
            
            forl(i,1,distance.size())
            {
                if(i!=starting)
                {
                    if(distance[i]!=1000000000)
                    {
                      cout << distance[i] <<" " ;
                    }
                    else
                    {
                        cout << -1 << " " ;
                    }
                }
            }
            cout << endl;
            distance.clear(); visited.clear();
        }  
    }
    void djik()
    {
        for( pll v: a[temp.second])
        {
            if(distance[v.second]> distance[temp.second] + v.first)
            {
                //cout << "united" << endl;
                distance[v.second]=distance[temp.second]+ v.first;
                wait.push(mp(distance[v.second],v.second));
            }
        }
        return;
    }
};
int main() 
{
    dist t;
    t.inp();
    return 0;
}
