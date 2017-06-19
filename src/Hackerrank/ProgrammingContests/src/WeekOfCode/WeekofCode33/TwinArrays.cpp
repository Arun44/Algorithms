#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
class twin
{
    ll temp,no; vpll a,b;
    public:
    void inp()
    {
        cin >> no;
        forl(i,0,no)
        {
            cin >> temp; a.pb(mp(temp,i));    
        }
        forl(i,0,no)
        {
            cin >> temp ; b.pb(mp(temp,i));   
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
             if(a[0].second!=b[0].second)
             {
                    cout << a[0].first + b[0].first << endl;
             }
            else
            {
                if  ((a[0].first+b[1].first) < (a[1].first+b[0].first))
                {
                     cout <<    (a[0].first+b[1].first) << endl;
                }
                else
                {
                        cout <<    (a[1].first+b[0].first) << endl;
                }
            }
        
    }
};

int main() 
{
    twin t;
    t.inp();
    return 0;
}
