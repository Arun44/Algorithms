#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string s;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
class duplication
{
    s y,q1,q2; s c="0";s v="1";ll n,m;
    public:
    void inp()
    {
         while(y.size()<=1024)
         {
             q1 = c + v;
             q2 = v + c;
             y = q1 + q2;
             c = y;
             v = q2 + q1;
         }
        cin >> m;
        forl(i,0,m)
        {
            cin >> n;
            cout << y[n] << endl;
        }
    }
    
};
int main() 
{
    duplication p;
    p.inp();
    return 0;
}

