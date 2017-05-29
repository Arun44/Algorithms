#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string s;
typedef char c;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define forn(i,a,b) for(sz i=a;i<=b;i++)

class bug
{
    ll no; s ster;bool f=true;
    public:
    void inp()
    {
         cin >> no;
         forl(i,0,no)
         {    
             cin >> ster;
             forl(j,0,ster.size())
             {
                if(ster.at(j)=='X')
                {
                   cout << i << "," << j << endl;
                   f=false;
                   break;
                }
             }
             if(f==false)
             {
                break;    
             }
         }
    }
};
int main() 
{
    bug b;
    b.inp();
    return 0;
}

