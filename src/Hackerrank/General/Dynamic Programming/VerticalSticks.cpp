#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef double ll;
typedef vector<ll> vll;
#define pb push_back
#define forn(i,a,b) for(ll i=a;i<b;i++)
class sticks
{
   ll testno,n,temp,tem,ty,rt,pre; vll att; ll ov;ll sum=0;
   public:
   void gp()
   {
      cin>>testno; 
      while(testno--)
      {
          cin >> n;
          forn(i,0,n)
          {
              cin >> temp;att.pb(temp);
          }
          sort(att.begin(),att.end());
          ov = (att.size()+1);
          rev();
          printf("%0.2f\n",ov * sum);
          sum=0;att.clear();
      }
   }
    void rev()
    {
        forn(i,0,att.size())
        {
             if(i==0)
             {
                 tem = att.at(i); 
                 ty=(att.size()+1);
                 sum = sum +(1/ty); pre=(1/ty);  
                 //cout << sum << endl;
             }
            else
            {
                if(tem==att.at(i)){
                                  sum=sum+pre;
                                 // cout << sum << endl;
                                  }
                                
                else
                {
                    rt=(att.size()-i)+1;
                    tem=att.at(i); sum = sum + (1/rt);pre=(1/rt);
                   // cout << sum << endl;
                }
            }
        }
    }
};
int main() {
    sticks sty;
    sty.gp();
    return 0;
}





