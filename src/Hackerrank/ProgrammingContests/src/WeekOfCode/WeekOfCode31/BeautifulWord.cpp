#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef string s;
typedef char c;
typedef vector<ll> vll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
class beau
{
    s ster; c temp;bool y=true;
    public:
    void inp()
    {
       cin >> ster;
       forl(i,0,ster.size())
       {
          if(i==0)
          {
             temp = ster.at(i);    
          }
          else
          {
               if(ster.at(i)==temp)
               {
                   cout << "No" << endl;
                   y=false;
                   break;
               }
              else
              {
                   if ((ster.at(i)=='a') || (ster.at(i)=='e')  || (ster.at(i)=='i')  || (ster.at(i)=='o') || (ster.at(i)=='u')|| (ster.at(i)=='y'))
                   {
    if ((temp=='a') || (temp =='e')  || (temp=='i')  || (temp=='o') || (temp=='u')|| (temp=='y'))
                           {    
                                cout << "No" << endl;
                                y=false;
                                break;
                           }
                          else
                          {
                              temp = ster.at(i);    
                          }
                         
                   }
                  else
                      {
                      temp = ster.at(i);
                  }
              }
          }
       }
        if(y==true){cout<<"Yes" << endl;}
    }
};
int main()
{
   beau b;
   b.inp();
   return 0;
}