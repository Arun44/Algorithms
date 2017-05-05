#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <list>
using namespace std;
typedef string s;
typedef char c;
typedef long long ll;
typedef pair<ll,s> plss;
typedef vector<plss> vplss;
typedef list<s> ls;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
class st
{
    ll no;s ster;vplss att;ll ty;
    public:
    void gp()
    {
        cin >> no;
        forl(i,0,no)
        {
            cin >> ster;
            ty=ster.length();att.pb(mp(ty,ster));
        }
        sort(att.begin(),att.end());
        forl(i,0,att.size())
        {
             cout << att.at(i).second << endl;    
        }
    }
};
int main() 
{
    st t;
    t.gp();
    return 0;
}

