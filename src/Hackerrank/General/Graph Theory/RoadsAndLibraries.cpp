#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
#include <utility>
#include <iterator>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef list<ll> vlll;
typedef vlll::iterator lit;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define forn(i,a,b) for(sz i=a;i<=b;i++)
#define pb push_back
#define mp make_pair
#define MIN(a,b) ((a) < (b) ? a : b)
vlll *att;
class cost
{
    ll noque,nocity,noroads,clib,croad,tem1,tem2,t1,t2;ll count=0;ll overallans=0;
    vll visited;lit it;bool f=false;
    public:
    void inp()
    {
        cin >> noque;
        while(noque--)
        {
           cin >> nocity >> noroads >> clib >> croad ;
           att = new vlll[nocity+1] ;
           forl(i,0,nocity+1)
           {
               visited.pb(-1); //visited array 
           }
           forl(i,0,noroads)
           {
              cin >> tem1 >> tem2 ;
              att[tem1].pb(tem2);att[tem2].pb(tem1);
           }
           //now starting the dfs :)
           forn(i,1,nocity)
           {
               if(visited.at(i)==-1)
               {
                   // cout<<"united"<< endl;
                    dfs(i);  
                    count = count + 1;
                    t1 = clib*count ; t2 = croad*(count-1) + clib;
                    overallans = overallans + MIN(t1,t2);
                    count = 0;
               }
               else
               {
                    continue;    
               }
           }
           cout << overallans << endl;
           count = 0;att->clear();overallans=0;visited.clear();
        }
    }
    void dfs(ll x)
    {
         visited.at(x)=0;
         for(auto it=att[x].begin();it!=att[x].end();it++)
         {
               
               if(visited.at(*it)==-1)
               {
                   //cout << "real" << endl;
                   count = count + 1; visited.at(*it)=0;
                   dfs(*it);
               }
               else{continue;}
         }
          return;
    }
};
int main() 
{
    cost a;
    a.inp();
    return 0;
}



