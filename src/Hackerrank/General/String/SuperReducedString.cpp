#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <stack>
#include <utility>
using namespace std;
typedef long long ll;
typedef string s;
typedef char c;
typedef vector<c> vll;
typedef stack<c> stcll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define forn(i,a,b) for(sz i=a;i<=b;i++)
#define pb push_back
#define mp make_pair
#define p push
class super
{
   s ster;c temp;stcll att;c t1;s ans;
   public:
   void gp()
   {
        cin >> ster;
        forl(i,0,ster.length())
        {
           temp=ster.at(i);
           if(i==0)
           {
              att.p(temp);    
           }
           else
           {
               if(att.empty()!=true)
               {
                   t1=att.top();
                   if(temp==t1)
                   {
                      att.pop();    
                   }
                   else
                   {
                      att.p(temp);    
                   }
               }
               else
               {
                  att.p(temp);    
               }
           }
        }
       if(att.empty()==true)
       {
           cout << "Empty String" << endl;
       }
       else
       {
           while(att.empty()!=true)
           {
               ans=ans+att.top();
               att.pop();
           }
           // cout << ans << endl;
           for(sz i=ans.length()-1;i>=0;i--)
           {
                cout << ans.at(i) ;    
           }
           cout << endl;
       }
   }
};
int main() 
{
    super r;
    r.gp();
    return 0;
}

