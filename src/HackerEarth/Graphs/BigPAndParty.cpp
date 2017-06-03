#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef queue<pll> qpll;
typedef list<ll> lil;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define forn(i,a,b) for(sz i=a;i<=b;i++)
#define pb push_back
#define mp make_pair
lil *att;
class dance
{
   ll a,b,tem1,tem2;pll temp;qpll wait;vll visited,lucky;
   public:
   void inp()
   {
       cin >> a >> b;
       att = new lil[a];
       forl(i,0,a)
       {
           visited.pb(-1);lucky.pb(-1);
       }
       lucky.at(0)=0;
       forl(i,0,b)
       {
           cin >> tem1 >> tem2;
           att[tem1].pb(tem2); att[tem2].pb(tem1);
       }
       wait.push(mp(0,0));
       while(wait.empty()==false)
       {
              temp = wait.front();wait.pop();
              bfs(temp.first,temp.second);
       }
       forl(i,1,lucky.size())
       {
           cout << lucky.at(i) << endl;
       }
   }
   void bfs(ll x,ll dis)
   {
       visited.at(x)=0;
       for(auto it=att[x].begin();it!=att[x].end();it++)
       {
              if(visited.at(*it)==-1)
              {
                   lucky.at(*it) = dis + 1;
                   visited.at(*it)=0;
                   wait.push(mp(*it,dis+1));
              }
       }
       return;
   }
};
int main()
{
    dance d;
    d.inp();
    return 0;
}
