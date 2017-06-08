#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string s;
typedef char c;
typedef list<ll> lil;
typedef vector<ll> vll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define forn(i,a,b) for(sz i=a;i<=b;i++)
#define pb push_back
#define mp make_pair
lil *a;
class relations
{
    ll testno,no,k,x1,x2;s t;
    vll visited; vll notequal;vll ans;ll p=0;ll r=1;ll w1,w2;bool y=true;
    public:
    void inp()
    {
        cin >> testno;
        while(testno--)
        {
            cin >> no >> k;
            a = new lil [no+1];
            visited.pb(-1);ans.pb(-1);
            forn(i,1,no)
            {
                visited.pb(-1);ans.pb(-1);
            }
            forn(i,1,k)
            {
                cin >> x1 >> t >> x2 ;
                //cout << t << "united" <<  endl;
                if(t.size()==1)
                {
                    a[x1].pb(x2);a[x2].pb(x1); 
                }
                else
                {
                    notequal.pb(x1);notequal.pb(x2);
                }
            }
            forn(i,1,no)
            {
                if(visited.at(i)==-1)
                {
                    ans.at(i)=r;
                    dfs(i); 
                    r=r+1;
                }
            }
            while(p<notequal.size())
            {
                 x1 = notequal.at(p);x2=notequal.at(p+1);p=p+2;
                 w1=ans.at(x1);w2=ans.at(x2);
                 //meaning that both components are not in any graph
                 // and thus they can be assigned values such that they are not equal :)
                 if ((w1!=-1) && (w2!=-1))   
                 {
                             if(w1==w2)
                             {
                                  y = false;
                             }
                 }
            }
            if(y==false)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
            y=true;p=0;r=1;visited.clear();ans.clear();a->clear();notequal.clear();
        }
    }
    void dfs(ll x)
    {
        visited.at(x)=0;
        for(auto it=a[x].begin();it!=a[x].end();it++)
        {
                if(visited.at(*it)==-1)
                {
                      visited.at(*it)=0;ans.at(*it)=r;
                      dfs(*it);
                }
        }
        return;
    }
};
int main()
{
    relations z;
    z.inp();
    return 0;
}
