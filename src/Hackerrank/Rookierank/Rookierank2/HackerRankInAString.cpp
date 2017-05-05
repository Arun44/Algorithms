#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
typedef long long ll;
typedef string s;
typedef char c;
typedef map<c,ll> mcll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
class rt
{
    ll testno; s ster;s mstr="hackerrank";mcll att;c tem;ll st;bool f=true;bool r=true;bool u =true;
    public:
    void gp()
    {
        cin >> testno;
        while(testno--)
        {
           cin >> ster;
           forl(i,0,mstr.length())
           {
                 tem = mstr.at(i);
                 if(att.count(tem)==0)
                 {
                     att[tem]= 1; 
                 }
                else
                {
                    att[tem] = att[tem] + 1;    
                }
           }
           comp();
           att.clear();
           f=true;r=true;u=true;
        }
    }
    void comp()
    {
        st=0;
        forl(i,0,mstr.length())
        {
            f=true;
            forl(k,st,ster.length())
                {
                   if(ster.at(k)==mstr.at(i))
                   {
                       att[mstr.at(i)] = att[mstr.at(i)] - 1;
                       st=k+1;
                       f=false;
                       break;
                   }
                 }
                 if(f==true)
                 {
                     cout << "NO" << endl;
                     r=false;
                     break;
                 }
                 
                 if(st>=ster.length())
                 {
                     break;    
                 }
        }
        if(r!=false)
        {
           forl(i,0,mstr.length())
           {
                 tem = mstr.at(i);
                 if(att[tem]!=0)
                 {
                     cout << "NO" <<endl;  u=false;
                     break;
                 }
                 
           }
            if(u!=false)
            {
                cout << "YES" << endl;    
            }
        }
        
    }
};
int main() 
{
    rt t;
    t.gp();
    return 0;
}

