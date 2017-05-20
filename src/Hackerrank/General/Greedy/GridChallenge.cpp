#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;
typedef long long ll;
typedef string s;
typedef char c;
typedef vector<ll> vll;
typedef vector<vll> vvll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define forl(i,a,b) for(sz i=a;i<=b;i++)
#define pb push_back
ll a[101][101]={0};
class grid
{
    ll testno,no;s rt;c temp;vll tem;ll l,k;bool f=true;
    public:
    void inp()
    {
        cin >> testno;
        while(testno--)
        {
           cin >> no;
           l=1;k=1;
           while(l<=no)
           {
                   k=1;
                   cin >> rt;
                   forn(i,0,rt.size())
                       {
                               temp = rt.at(i);
                               ll t  = temp - 'a' ;
                               //cout << t << endl;
                               tem.pb(t); 
                               sort(tem.begin(),tem.end());
                       }
                   forn(p,0,tem.size())
                   {
                       a[l][k]=tem.at(p);  
                       k=k+1;
                   }
               l=l+1;tem.clear();
               //cout << "united" << endl;
           }
            /*
            forl(i,1,no)
            {
               forl(k,1,no)
               {
                   cout << a[i][k] << " " ;    
               }
                cout << endl;
            }*/
            
           forl(j,1,no)
           {
               forl(i,1,no-1)
               {
                    if(a[i][j]>a[i+1][j])
                    {
                        f=false;
                        break;
                    }
               }
               if(f==false){break;}
           }
           if(f==false){cout << "NO" << endl;}
            else{cout << "YES"<< endl;}
            f=true;a[101][101]={0};tem.clear();
        }
    }
};
int main() 
{
    grid p;
    p.inp();
    return 0;
}



