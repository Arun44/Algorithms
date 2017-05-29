#include <bits/stdc++.h>
using namespace std;
typedef int ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef queue<pll> qpll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
class walk
{
    ll n,s,t,temp,g,seed,p,tem;vll att,visited;qpll wait; pll var;ll g1,g2;bool er=true;ll mainvar;
    public:
    void inp()
    {
         ios_base::sync_with_stdio(false);
        cin >> n >> s >> t;
        if(s==t){cout << 0 << endl;return;}//if they are in the same position :)
        cin >> temp >> g >> seed >> p; //r(i)=(r(i-1) * g + seed) mod p ;
        att.pb(temp) ; //r[0] intialized :)
        visited.pb(-1);
        forl(i,1,n)
        {
            tem  = ( ((att[i-1]*g))%p + (seed)%p )%p;
            att.pb(tem);
            visited.pb(-1);
        }
        /*
        forl(i,0,att.size())
        {
            cout << att.at(i) << "  "  ;    
        }*/
        wait.push(mp(s,0));
        while(wait.empty()==false)
        {
             var = wait.front();wait.pop();
             bfs(var.first,var.second);
            if(er==false)
            {
                break;    
            }
        }
        if(er==true){cout << -1 << endl;}
    }
    void bfs(ll x,ll dis)
    {
        //cout << "the value of node is  "  << x << endl;
        visited[x]=0;
        mainvar = att[x]; //x=5 ,mainvar=6,n=9;
        //to calculate the range :)
        for(ll i=1;i<=mainvar;i++)
        {
             g1 = (x+i)%n ; //clockwise
             g2 = ((x-i)+n) %n;  //anticlockwise
             //cout << "the value of g1 is  " << g1 << endl;
             //cout << "the value of g2 is  " << g2 << endl;
             if(g1==t)
             {
                 cout << dis + 1 ; 
                 er = false; break;
             }
             else
             {
                   if(visited[g1]==-1) //not been visited before
                   {
                       visited[g1]=0;
                       if(att[g1]!=0)
                       {
                          wait.push(mp(g1,dis+1));
                       }
                   }
             }
            if(g2==t)
             {
                 cout << dis + 1 ; 
                 er = false; break;
             }
             else
             {
                   if(visited[g2]==-1) //not been visited before
                   {
                       visited[g2]=0; 
                       if(att[g2]!=0)
                       {
                          wait.push(mp(g2,dis+1));
                       }
                   }
             }
        }
        return ;
    }
};
int main() 
{
    walk k;
    k.inp();
    return 0;
}

