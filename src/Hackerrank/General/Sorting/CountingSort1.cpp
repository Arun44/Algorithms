#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define forn(i,a,b) for(ll i=a;i<b;i++)
#define pb push_back
class cou
{
    ll n,temp;vll att; 
    public:
    void gp()
    {
        forn(i,0,100)
        {
           att.pb(0);
        }
        cin >> n;
        forn(i,0,n)
        {
            cin >> temp;
            att.at(temp)=att.at(temp) + 1;
        }
        forn(i,0,att.size())
        {
            cout << att.at(i) << " " ;    
        }
            
    }
};
int main() {
    cou c;
    c.gp();
    return 0;
}



