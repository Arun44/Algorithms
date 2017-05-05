#include <iostream>
#include <cstdio>
#include <vector>
#include <iterator>
#include <map>
#include <utility>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<pll> vll;
typedef vll::iterator vit;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
class rt
{
    ll notrips,noofflavours,temp,targetmoney;vll att;vit mit;
    ll low=0;ll high;
    public:
    void gp()
    {
       cin >> notrips;
       forl(i,0,notrips)
       {
           cin >> targetmoney;
           cin >> noofflavours;
           forl(i,0,noofflavours)
           {
               cin >> temp;  att.pb(mp(temp,i+1));  
           }
           sort(att.begin(),att.end());
           //mit=lower_bound(att.begin(),att.end(),targetmoney);
           /*
           if((mit-att.begin())==noofflavours)
           {
              high=(mit-att.begin())-1;
               
           }
           else
           {
               high= (mit-att.begin());
           }
           cout << high << endl;*/
           high = att.size()-1;
           while(low!=high)
           {
                if( (att.at(low).first + att.at(high).first) > targetmoney )  
                {
                    high = high -1;    
                }
                if( (att.at(low).first + att.at(high).first) < targetmoney )  
                {
                    low = low + 1;     
                }
                if( (att.at(low).first + att.at(high).first) == targetmoney)
                {
                     if(att.at(low).second>att.at(high).second)
                     {
                          cout << att.at(high).second << " " << att.at(low).second << endl;   
                          break;
                     }
                     else
                     {
                          cout << att.at(low).second << " " << att.at(high).second << endl;  
                          break;
                     }
                }
           }
           att.clear();
           low=0;
       }
    }     
    
};
int main()
{
   rt t;
   t.gp();
   return 0;
}



