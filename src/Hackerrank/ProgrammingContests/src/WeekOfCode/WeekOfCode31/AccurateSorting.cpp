#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
class arr
{
    ll ttno,no,temp;ll pr=0; vll ayy;bool f=true;ll t;
     public:
    void inp()
           {
               cin >> ttno;
               while(ttno--)
               {

                  cin >> no;
                  forl(i,0,no)
                  {
                     cin >> temp; ayy.pb(temp);    
                  }
                 forl(i,0,ayy.size())
                {
                    t=ayy.at(i);
                    //cout << t <<" "<< i << endl; 
                    //cout << t-1-pr << endl;
                    if (((t-1)-pr)>0) 
                    {
                       cout << "No" << endl;
                       f=false;
                       break;
                    }
                     pr=pr+1;
                 }
                  if(f==true)
                      {
                      cout << "Yes" << endl;
                  }
                   f=true;ayy.clear();pr=0;
               }
             
    }
};

int main() 
{
    arr p;
    p.inp();
    return 0;
}

