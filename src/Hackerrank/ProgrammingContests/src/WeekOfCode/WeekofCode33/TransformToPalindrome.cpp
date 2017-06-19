#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
ll a[1001][1001]={0};
using namespace std;
class palin
{
    ll n,k,m,tem1,tem2,p1,p2,qw,e1,e2;
    vll par,rank,element;
    public:
    void inp()
    {
        cin >> n >> k >> m;
        par.pb(0);rank.pb(1);
        forl(i,1,n+1)
        {
            par.pb(i);rank.pb(1);   
        }
        forl(i,0,k)
        {
            cin >> tem1 >> tem2 ;
            p1=finpar(tem1);
            p2=finpar(tem2);
            if(p1!=p2)
            {
                 if(rank[p1]==rank[p2])
                 {
                     par[p2]=p1;
                     rank[p1]=rank[p1]+1;
                     rank[p2]=0;
                 }
                else
                {
                    if(rank[p1]<rank[p2])
                    {
                         par[p1]=p2;
                         rank[p1]=0;
                    }
                    else
                    {
                        par[p2]=p1;
                        rank[p2]=0;
                    }
                }
            }
        }
        element.pb(0);
        forl(i,0,m)
        {
            cin >> tem1;
            element.pb(tem1);
        }
        for(ll i=1;i<=m;i++)
        {
            a[i][i]=1;    
        }
        for(ll w=1;w<=m-1;w++)
        {
             qw=m-w;
             e1=1;e2=e1+w;
             while(qw--)
             {    
                  
                  if(finpar(element[e1])==finpar(element[e2]))
                  {
                      a[e1][e2]= 2 + a[e1+1][e2-1];    
                  }
                 else
                 {
                      a[e1][e2]= max(a[e1][e2-1],a[e1+1][e2]);    
                 }
                 e1=e1+1;
                 e2=e2+1;
             }
        }
        cout << a[1][m] << endl;
        /*
        for(ll i=0;i<=m;i++)
        {
           for(ll j=0;j<=m;j++)
           {
               cout << a[i][j] << " " ;    
           }
           cout << endl;
        }*/
    } 
    ll finpar(ll x)
    {
        while(x!=par[x])
        {
             par[x] = finpar(par[x]);
             break;
        }
        return par[x];
    }
    
};
int main() 
{
    palin v;
    v.inp();
    return 0;
}
