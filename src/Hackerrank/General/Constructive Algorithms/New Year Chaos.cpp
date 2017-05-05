#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;
typedef long long ll;
typedef string s;
typedef vector<ll> vll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
class nr
{
    ll ttno,no,temp,count=0;vll ayy;bool f=true;int t=0;int pr=0;
    public:
    void inp()
    {
       cin >> ttno;
       while(ttno--)
       {
          
          cin >> no;
          forl(i,0,no)
          {
             cin >> temp; ayy.pb(temp);    
          }
         forl(i,0,ayy.size())
        {
            t=ayy.at(i);
            //cout << t <<" "<< i << endl; 
            //cout << t-1-pr << endl;
            if (((t-1)-pr)>2) 
            {
               cout << "Too chaotic" << endl;
               f=false;
               break;
            }
             pr=pr+1;
         }
          if(f!=false)
              {
                  com(ayy,no);
                  cout << count << endl;
              }
                  ayy.clear();count=0;
                  f=true;pr=0;
       }
    }
    void com(vll &ayy,ll number)
    {
        
        if(number<2){return;}
        ll midvalue = number/2;
        vll left ; vll right;
        forl(i,0,midvalue){  left.pb(ayy.at(i));  }
        forl(i,midvalue,number) {right.pb(ayy.at(i));}
        com(left,midvalue);
        com(right,number-midvalue);
        comp(ayy,left,right,midvalue,number-midvalue);
    }
    void comp(vll &ayy,vll &lft,vll &rgt,ll lc,ll rc)
    {
        
        ll i=0;ll j=0;ll k=0;
        while((i<lc)&&(j<rc))
        {
             if(lft.at(i)<=rgt.at(j))
             {
                
                ayy[k]=lft.at(i);i=i+1; k=k+1; 
             }
             else
             {
                count = count + (lc-i) ;
                ayy[k]=rgt.at(j); j=j+1;k=k+1;  
             }
        }
        while(i<lc)
        {
            ayy[k]=lft.at(i);i=i+1;k=k+1;    
        }
        while(j<rc)
        {
           ayy[k]=rgt.at(j);j=j+1;k=k+1;    
        }
    }
    
};
int main() 
{
    nr p;
    p.inp();
    return 0;
}





