#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define forl(i,a,b) for(ll i=a;i<b;i++)
class tea
{
    ll n,temp;ll count=0;ll op,tem;
    public:
    void gp()
    {
       cin >> n;
       forl(i,0,n)
       {
           cin >> temp;
           if(temp!=0)
           {
               count = count + 1;
           }
       }
       rev();
    }
    void rev()
    {
        if( (count%4) == 0)
        {
             op = count/4;
        }
        else
        {
            op = (count/4) + 1; 
        }
        if( (count%4) == 0)
        {
            cout << op + 1 << endl;
            return;
        }
        else if((count%2)==0 && (count%4)!=0)
        {
            cout << op << endl;
            return;
        }
        else
        {
           tem = count+1;
           if( (tem%2)==0 && (tem%4)==0 )
           {
               cout << op+1 << endl;
               return;
           }
           else
           {
               cout << op << endl;
               return;
           }
        }
    }
};
int main()
{
    tea t;
    t.gp();
    return 0;
}
