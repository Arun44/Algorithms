#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
class rt
{
    ll n,temp,m;vll att;
    public:
    void gp()
    {
        cin >> n ;
        forl(i,0,n)
        {
            cin >> temp;
            att.pb(temp);
        }
        sort(att.begin(),att.end());
        comp();
    }
    void comp()
    {
        forl(i,0,n-1)
        {
             if(i==0)
             {
                 m = abs(att.at(i)-att.at(i+1));    
             }
             else
                 {
                     if(abs(att.at(i)-att.at(i+1))<m) 
                     {
                           m =  abs(att.at(i)-att.at(i+1));   
                     }
                 }
        }
        cout << m << endl;
    }
};
int main() 
{
    rt t;
    t.gp();
    return 0;
}

