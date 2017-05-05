#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long ll;
#define forn(i,a,b) for(ll i=1;i<b;i++)
class vetti
{   ll q,av; ll t; 
    public:
    void gp()
    {
        cin >> q;
        while(q--)
        {
            cin >> av ;
            if(av!=1)
            {
                 rev();    
            }
            else
            {
                cout << 0 << endl;     
            }
        }
        
    }
    void rev()
    {
       t=av;
       nexthigh();
       if(av!=t)
       {
          cout << (av-t)-1 << endl;    
       }
       else
       {
           cout << t-1 << endl;    
       }
    }
    void nexthigh()
    {
        av--;
        av |= av >> 1;
        av |= av >> 2;
        av |= av >> 4;
        av |= av >> 8;
        av |= av >> 16;
        av++;
	  
    }
};

int main() {
    vetti a;
    a.gp();
    return 0;
}

