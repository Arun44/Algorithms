#include <iostream>
#include <list>
#include <cstdio>
#include <vector>
#include <iterator>
#include <map>
#include <queue>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef list<ll> li;
typedef li::iterator lit;
typedef queue<ll> qll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
#define MAX(a,b) ((a) > (b) ? a : b)
#define MIN(a,b) ((a) < (b) ? a : b)
ll nnodes,medges;
class sink
{
    li *a1;li *a2; ll nnodes,medges,temp1,temp2;vll visited;
    lit it;ll count=0; ll count1=0;
    public:
    void inp()
    {
        cin >> nnodes >> medges;
        forl(i,0,nnodes+1)
        {
            visited.pb(-1);
        }
        a1 = new li[nnodes+1];a2 = new li[nnodes+1];
        forl(i,0,medges)
        {
            cin >> temp1 >> temp2 ;
            a1[temp1].pb(temp2);a2[temp2].pb(temp1);
        }
          forl(i,1,nnodes+1)
           {
                if(visited.at(i)==-1)
                {
                     compute(i,false) ; 
                }
                else
                {
                    continue;
                }
           }
           
           forl(i,0,nnodes+1)
           {
            visited.at(i)=-1;
           }
           forl(i,1,nnodes+1)
           {
                if(visited.at(i)==-1)
                {
                     compute1(i,false) ; 
                }
                else
                {
                    continue;
                }
           }
          cout << MAX(count,count1) << endl;
        
    }
    void compute(ll x,bool f)
    {
        f=false;
        for(auto it=a1[x].begin();it!=a1[x].end();it++)
        {
            f=true;
            if(visited.at(*it)==-1)
            {
                compute(*it,true);
            }
            
        }
        if(f==false)
        {
            if(visited.at(x)==-1)
            {
              count = count + 1; 
            }
        }
        visited.at(x)=0;
    }
    
    void compute1(ll x,bool f)
    {
        
        f=false;
        for(auto it=a2[x].begin();it!=a2[x].end();it++)
        {
            f=true;
            if(visited.at(*it)==-1)
            {
                compute1(*it,true);
            }
            
        }
        if(f==false)
        {
            if(visited.at(x)==-1)
            {
              count1 = count1 + 1; 
            }
            
        }
         visited.at(x)=0;
    }
    
};
int main()
{
    sink p;
    p.inp();
    return 0;
}
