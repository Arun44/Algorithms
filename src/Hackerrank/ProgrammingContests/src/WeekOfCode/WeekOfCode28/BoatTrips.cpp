#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
class rt
{
    ll n,c,m,temp;vll att;ll val;
    public:
    void gp()
    {
        cin >> n >> c >>m;
        for(ll i=0;i<n;i++)
        {
           cin >> temp; att.push_back(temp);
        }
        sort(att.begin(),att.end());
        val=m*c;
        if(att.back()>val)
        {
            cout << "No" << endl;    
        }
        else
            {
            cout << "Yes" << endl;
        }

    }
    
};
int main() {
    rt t;
    t.gp();
    return 0;
}

