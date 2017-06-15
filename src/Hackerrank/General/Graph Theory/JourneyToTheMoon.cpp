#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
using namespace std;
typedef long long ll;
typedef list<ll> tyu;
typedef vector<ll> vll;
#define pb push_back
#define forn(i,a,b) for(ll i=a;i<b;i++)
ll n,m;
class journey
{
    ll N,tem1,tem2;tyu *a;vll indication;ll noofcomponents=0;ll count=0;ll value=1;ll sum=0;ll answer;
    public:
    journey(ll k)
    {
       this -> N =k;
       a = new tyu[N];
       forn(i,0,N)
       {
            indication.pb(-1);    
       }
    }
    void ip()
    {
        forn(i,0,m)
        {
            cin >> tem1 >> tem2;
            a[tem1].pb(tem2);
            a[tem2].pb(tem1);
        }
        forn(i,0,N)
            {
                if(indication.at(i)==-1)
                {
                    dfsc(i);noofcomponents = noofcomponents + 1; //no of groups of ppl
                         if(i!=0)
                             {
                             answer = answer + sum*count;
                        // value = value * count; 
                             sum = sum + count;
                        // value=sum*count + value;
                         }
                        else
                         {
                            answer=0; sum = sum + count;
                        }
                 }
                count = 0;
            }
        res();
    }
    void dfsc(ll r)
    {
        indication[r]=1; count= count+1; //to keep track of the noof ppl in a connected component;
        for(auto it=a[r].begin();it!=a[r].end();it++)
        {
            if(indication.at(*it)==-1)
             {
               dfsc(*it);   
            }
            else
            {
                continue;    
            }
        }
    }
    void res()
    {/*
        cout << value << endl;
        cout << noofsingle << endl;
        cout << value + (sum*noofsingle) << endl;  
        */
        cout << answer << endl;
    }
};
int main() {
    cin >> n >> m;
    journey j(n);
    j.ip();
    return 0;
}
