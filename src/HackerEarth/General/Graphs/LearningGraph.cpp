#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
#include <cstdio>
#include <utility>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef list<pll> pil;
typedef list<pll>::iterator lit;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
ll n,m,k;
class rt
{
    ll nm,temp,temp1,temp2; vll att; pil *ayy;lit iter;ll a=1;
    vpll te;pll p;
    public:
    rt(ll nk)
    {
        this->nm = nk;
        ayy = new pil[nm+1];
    }
    void gp()
    {
        att.pb(0);
        forl(i,0,n)
        {
            cin >> temp;
            att.pb(temp);
        }
        forl(i,0,m)
        {
            cin >> temp1 >> temp2;
            ayy[temp1].pb(mp(att.at(temp2),temp2));
            ayy[temp2].pb(mp(att.at(temp1),temp1));
            //cout << "united" << endl;
        }
        //cout << "the value of n s" << n << endl;
        while(a<=n)
        {  
            //cout << "united" << endl;
            for(iter=ayy[a].begin();iter!=ayy[a].end();iter++)
            {
                p = *iter;
                te.pb(p);
            }
            sort(te.begin(),te.end(),std::greater<pll>());
            if(te.size()>=k)
            {
                p = te.at(k-1);
                cout << p.second << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
            te.clear();
            a=a+1;
            
        }
    }
};
int main()
{
    cin >> n >> m >> k;
    rt t(n);
    t.gp();
    return 0;
}