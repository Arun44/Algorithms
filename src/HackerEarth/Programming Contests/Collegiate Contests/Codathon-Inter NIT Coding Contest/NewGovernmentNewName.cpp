#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
using namespace std;
typedef long long ll;
typedef char c;
typedef map<c,ll> mpc;
typedef map<c,ll>::iterator mit;
#define forl(i,a,b) for(ll i=a;i<b;i++)
class name
{
   ll n,q,lep; string s; char te,necha,tem;mpc maa;mit it;
   ll index,queno;ll total=0;
   public:
   void gp()
   {
       cin >> n >> q ;
       cin >> s;
       lep=s.length();
       forl(i,0,lep)
       {
           te=s.at(i);
           if(maa.count(te)==0)
           {
               maa[te]=1;
           }
           else
           {
               maa[te]=maa[te]+1;
           }
       }
       /*
        cout << s << endl;
        for (it=maa.begin(); it!=maa.end();it++)
        {
             std::cout << it->first << " => " << it->second << '\n';
             
        }
       s.at(2)=necha;
       cout << s << endl;
       */
       forl(i,0,q)
       {
           cin >> queno ;
           if(queno==1)
           {
               cin >> index >> necha;
               tem=s.at(index-1); //taking the char at the mentioned index
               s.at(index-1)=necha;//replacing the old char with the new one
               maa[tem] = maa[tem] - 1; //decreasing the occurence of the character in the map
               if(maa[tem]==0) //we have to remve the character from the map if it does not occur
               {
                   maa.erase(tem) ;
               }
               if(maa.count(necha)==0) //introducing the new element in the map
               {
                   maa[necha]=1;
               }
               else
               {
                   maa[necha] = maa[necha] + 1;
               }
               /*
               for (it=maa.begin(); it!=maa.end();it++)
              {
                std::cout << it->first << " => " << it->second << '\n';
             
              }*/
           }
           else
           {
               cin >> index ;
               for (it=maa.begin(); it!=maa.end();it++)
               {
                     if( (it->second+total) > (index-1))
                     {
                         cout << it->first << endl;
                         break;
                     }
                     else
                     {
                         total = it->second + total;
                     }
               }
           }
           total=0;
       }
   }
  
   
};
int main()
{
    name t;
    t.gp();
    return 0;
}