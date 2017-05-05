#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef stack<ll> stll;
#define sz size_t
#define forl(i,a,b) for(ll i=a;i<b;i++)
#define pb push_back
class game
 {
    ll testno,no,temp;stll a;ll k,m,l; ll nodel=0;ll r=0;
    public:
    void inp()
    {
       ios_base::sync_with_stdio(false);
       cin >> testno;
       while(testno--)
       {
           cin >> no;
           forl(i,0,no)
           {
                cin >> temp;
                if(a.empty()==true)
                {
                   if(temp==0)
                   {
                       a.push(temp);r=1;
                       k=temp;
                   }    
                }
               else if(r==1)
               {
                   a.push(temp);
                    m=temp; r=2;  
               }
              else if(r==2)
              {
                  if ((k==0)&&(m==0))
                  {
                     if(temp==1)
                     {
                         a.push(temp);r=3;
                         l=temp;
                     } 
                     else
                     { 
                         nodel = nodel + 1 ; 
                         //cout << "united" << endl;  
                     }
                  }
                  else if ((k==0)&&(m==1))
                  {
                      if(temp==1)
                      { 
                          while(a.empty()==false)
                            {
                              a.pop();
                             }  
                          r=0;
                      }
                      else
                      { 
                          a.pop();
                          a.push(temp);
                          m=temp;
                          nodel=nodel+1;
                      }
                  }
              }
              else if(r==3)
              {
                 if(temp==0){nodel=nodel+2;a.pop();a.pop();m=temp;a.push(temp);r=2;}
                 else{ while(a.empty()==false){a.pop();} r=0; }
              }
           }
          // cout << nodel << endl;
           if( (nodel%2) ==0)
           {
              cout << "Bob" << endl;    
           }
           else
           {
              cout << "Alice"  <<  endl;    
           }
           while(a.empty()==false){a.pop();}
           nodel=0;r=0;
       }
    }
};
int main() 
{
    game t;
    t.inp();
    return 0;
}

