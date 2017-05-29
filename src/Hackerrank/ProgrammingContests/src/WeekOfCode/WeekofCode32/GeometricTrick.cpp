#include <bits/stdc++.h>
using namespace std;
typedef int ll;
typedef vector<ll> vll;
typedef string s;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define forn(i,a,b) for(sz i=a;i<=b;i++)
#define pb push_back
#define mp make_pair
class trick
{
    ll no;s ster; vll a,b,c;ll count = 0 ;ll w,target;
    public:
    void inp()
    {
        ios_base::sync_with_stdio(false);
        cin >> no;
        cin >> ster;
        forl(i,0,ster.size())
        {
             if(ster.at(i)=='a'){a.pb(i);}  //i
             if(ster.at(i)=='b'){b.pb(i);}  //j
             if(ster.at(i)=='c'){c.pb(i);}  //k 
        }
        sort(c.begin(),c.end()); //sorting the array :)
        for(ll i=0;i<a.size();i++)
        {
            for(ll j=0;j<b.size();j++)
            {
                  w=((b[j]+1)*(b[j]+1)) ;
                  if(w%(a[i]+1)==0)
                  {
                      target =  w/(a[i]+1) ;
                      target = target - 1 ;
                      if(binary_search(c.begin(),c.end(),target)==true)
                      {
                         count = count + 1;  
                      }
                  } 
            }
        }
        cout << count << endl;
    }
};
int main() 
{
    trick t;
    t.inp();
    return 0;
}

