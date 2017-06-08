#include <iostream>
#include <vector>
#include <cstdio>
#include <iterator>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
class rt
{
    ll n,temp;ll sum=0;
    public:
    void gp()
    {
        cin >> n;
        forl(i,0,n)
        {
            cin >> temp;
            sum = sum + temp;
        }
        com();
    }
    void com()
    {
        if(sum==(n+(n-2)))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
};
int main()
{
    rt t;
    t.gp();
    return 0;
}
