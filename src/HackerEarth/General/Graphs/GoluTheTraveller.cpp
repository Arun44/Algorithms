#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string s;
typedef char c;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<s> vs;
typedef map<s,ll> msll;
typedef list<pll> lill;
typedef stack<ll> sll;
typedef pair<pll,ll> pol;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
int loc[10001][10001];
class traveller
{
    ll testno,no,weight;ll count=1; msll ma;lill *z;sll st; vll visited; s x,y; vs coun;
    ll sum = 0; bool df = true;s prev; ll prevnum;
    public:
    void inp()
    {
        cin >> testno;
        while(testno--)
        {
                cin >> no;
                z = new lill[no+1];
                visited.pb(0);coun.pb("yes");
                forl(i,0,no)
                {
                    visited.pb(0);coun.pb("yes");
                }
                forl(i,0,no-1)
                {
                    cin >> x >> y >> weight;
                    sum = sum + weight;
                    if ((ma[x]==0)&&(ma[y]==0))
                    {
                         z[count].pb(mp(count+1,weight));
                         ma[x] = count ; ma[y]=count+1;
                         coun[count]=x; coun[count+1]=y;
                         loc[count][count+1]=weight;
                         count = count + 2;
                    }
                    else if ((ma[x]!=0) && (ma[y]==0))
                    {
                         z[ma[x]].pb(mp(count,weight));
                         ma[y]=count;
                         coun[count]=y;
                         loc[ma[x]][count]=weight;
                         count = count + 1;
                    }
                    else if ((ma[x]==0) && (ma[y]!=0))
                    {
                        z[count].pb(mp(ma[y],weight));
                        ma[x]=count;
                        coun[count]=x;
                        loc[count][ma[y]]=weight;
                        count = count + 1;
                    }
                    else if ((ma[x]!=0) && (ma[y]!=0))
                    {
                        z[ma[x]].pb(mp(ma[y],weight));
                        loc[ma[x]][ma[y]]=weight;
                    }
                }
                //dfs :)
                
                forl(i,1,no+1)
                {
                    if(visited[i]==0)
                    {
                        dfs(i);
                    }
                }
                
                while(st.empty()==false)
                {
                    if(df==true)
                    {
                        prev  =   coun[st.top()] ;
                        prevnum = st.top();
                        st.pop();
                        df=false;
                    }
                    else
                    {
                          cout << prev << " " << coun[st.top()] << " " << loc[prevnum][st.top()] << endl;
                          prev  =   coun[st.top()] ;
                          prevnum = st.top();
                          st.pop();
                    }
                    
                }
                cout << sum << endl;
                sum = 0 ;visited.clear();coun.clear();df=true;count=1;ma.clear();
               
        }
        
        
    }
    void dfs(ll x)
        {
            visited[x]=-1;
            for(auto it=z[x].begin();it!=z[x].end();it++)
            {
                  if(visited[it->first]==0)
                  {
                      dfs(it->first);
                      
                  }
            }
            st.push(x);
            return;
        }
};
int main()
{
    traveller r;
    r.inp();
    return 0;
}
