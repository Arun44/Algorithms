#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef list<ll> lil;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define forn(i,a,b) for(sz i=a;i<=b;i++)
#define pb push_back
#define mp make_pair
#define MAX(a,b) ((a) > (b) ? a : b)
lil *a;
class colour
{
    ll n,m,testno,tem1,tem2;ll rc=0;ll bc=0;ll ans=0; bool y=true;bool p=true;
    vll visited,color;
    public:
    void inp()
    {
        cin >> testno;
        while(testno--)
        {
            cin >> n >> m;
            a = new lil[n+1];
            visited.pb(-1);color.pb(-1);
            forn(i,1,n){visited.pb(-1);color.pb(-1);}
            forn(i,1,m)
            {
                cin >> tem1 >> tem2 ; a[tem1].pb(tem2);a[tem2].pb(tem1);
            }
            forn(i,1,n)
            {
                if(y==true)
                {
                    if(visited[i]==-1)
                    {
                             color.at(i)=23;//giving color red to the initial node :)
                             dfs(i); 
                             rc = rc + 1;
                             if(p==false)
                             {
                                 y=false;
                             }
                             else
                             {
                                 ans = ans + MAX(bc,rc) ;
                             }
                    }
                }
                else
                {
                    break;
                }
                rc = 0 ;bc = 0;
            }
            if(y==true)
            {
                cout << ans << endl;
            }
            else
            {
                cout << "NO" <<endl;
            }
            a->clear();visited.clear();color.clear();rc=0;bc=0;ans=0;y=true;p=true;
        }
    }
    void dfs(ll x)
    {
               //cout << "yx" << x << endl;
               //cout << "colour value is" << color.at(x) << endl;
               visited.at(x)=0;
               for(auto it=a[x].begin();it!=a[x].end();it++)
               {
                   if(p!=false)
                    {
                           if(visited.at(*it)==-1)
                           {
                                  if(color.at(x)==23)   //if the incoming node was red 
                                  {
                                      
                                      color.at(*it)=24; //this node is given blue
                                      bc = bc + 1; visited.at(*it)=0;
                                      dfs(*it);
                                  }
                                  else if(color.at(x)==24)
                                  {
                                      color.at(*it)=23 ; //this node is given red 
                                      rc = rc + 1;visited.at(*it)=0;
                                      dfs(*it);
                                  }
                           }
                           else
                           {
                                  if(color.at(x)==color.at(*it))  //if the colour becomes same :)
                                  {
                                     // cout << "the value is" << *it << endl;
                                     // cout << "the value isx" << x << endl;
                                      p=false;
                                      break;
                                  }
                           }
                    }
                    else
                    {
                        return ;
                    }
               }
               
               return ;
    }
    
};
int main()
{
    colour r;
    r.inp();
    return 0;
}
