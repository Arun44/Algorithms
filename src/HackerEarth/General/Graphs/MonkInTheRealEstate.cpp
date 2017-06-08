#include <iostream>
#include <vector>
#include <list>
#include <utility>
#include <algorithm>
#include <iterator>
#include <cstdio>
#include <set>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef set<ll> sll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<=b;i++)
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
class rt
{
    ll testno,n,temp1,temp2;sll att;
    public:
    void ini()
    {
        cin >> testno;
        while(testno--)
        {
            cin >> n;
            forn(i,0,n)
            {
                cin >> temp1 >> temp2;
                att.insert(temp1);att.insert(temp2);
            }
            cout << att.size() << endl;
            att.clear();
        }
    }
    
};
int main()
{
    rt t;
    t.ini();
    return 0;
}