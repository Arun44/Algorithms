#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef list<ll> lil;
typedef queue<pll> qpll;
typedef vector<ll> vll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
lil *a;
class reach
{
    ll noque,no,m,tem1,tem2,source;
    pll temp;
    vll distance,process;
    qpll wait;
    public:
    void inp()
    {
       cin >> noque;
       while(noque--)
       {
          cin >> no >> m ;
          a = new lil[no+1];
          distance.pb(-1);process.pb(-1);
          forl(i,0,no)
          {
              distance.pb(-1);process.pb(-1);
          }
          forl(i,0,m)
          {
              cin >> tem1 >> tem2 ;   
              a[tem1].pb(tem2);a[tem2].pb(tem1);
          }
          cin >> source;
          wait.push(mp(source,0));
          while(wait.empty()==false)
          {
              temp = wait.front();wait.pop();
              comp();
          }
          forl(i,1,distance.size())
          {
              if(i!=source)
             {
                cout << distance[i] << " " ;  
             }
          }
          cout << endl;
          a -> clear();distance.clear();process.clear();
       }
    }
    void comp()
    {
        process[temp.first]=0;
        for(auto it=a[temp.first].begin();it!=a[temp.first].end();it++)
        {
              if(process[*it]==-1)
              {
                   distance[*it]=temp.second+6;
                   process[*it]=0;
                   wait.push(mp(*it,temp.second+6));
              }
        }
        return;
    }
};
int main() 
{
    reach r;
    r.inp();
    return 0;
}
