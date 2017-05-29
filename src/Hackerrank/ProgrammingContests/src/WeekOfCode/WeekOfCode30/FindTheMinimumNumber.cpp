#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef string s;
typedef long long ll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
class op
{
    public:
    s ster = "min(int, ";
};
class im
{
    ll n;s ans;
    public:
    void gp()
    {
        cin >> n;  
        op t;
        forl(i,1,n)
        {
            ans = ans + t.ster;
        }
        ans = ans+"int";
        forl(i,1,n)
        {
           ans = ans + ")" ;    
        }
        cout << ans << endl;
    }
   
};
int main() 
{
    im p;
    p.gp();
    return 0;
}

