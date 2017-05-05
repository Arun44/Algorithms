#include <iostream>
#include <cstdio>
#include <iterator>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
class ty
{
	ll no,temp,a,b,c,d,e,f;vll larr,rarr;ll cou=0;ll target;
	ll lc,rc;vll att;
    public:
    void inp()
    {
    	cin >> no;
    	forl(i,0,no)
    	{
    		cin >> temp; att.pb(temp);
    	}
    	comp();
    }
    void comp()
    {
    	forl(i,0,att.size())
    	{
    		a = att.at(i);
    		forl(j,0,att.size())
		    		{
		    			b = att.at(j);
		    			forl(k,0,att.size())
		    			{
		    				c=att.at(k);
		    				larr.pb((a*b)+c);
		    			}
		    		}
		 }
		 
		 forl(i,0,att.size())
    	 {
    		d = att.at(i);
    		if(d!=0)
    		{
		    		forl(j,0,att.size())
				    		{
				    			e = att.at(j);
				    			forl(k,0,att.size())
				    			{
				    				f=att.at(k);
				    				rarr.pb(d*(f+e));
				    			}
				    		}
		    }
		 }
		 
    	sort(larr.begin(),larr.end());sort(rarr.begin(),rarr.end());
    	forl(i,0,larr.size())
    	{
    		target = larr.at(i);
    		lc = lower_bound(rarr.begin(),rarr.end(),target)-rarr.begin();
    		rc = upper_bound(rarr.begin(),rarr.end(),target)-rarr.begin();
    		cou = cou + (rc-lc);
    	}
    	cout << cou << endl;
    }
};
int main() 
{
   ty p;
   p.inp();
   return 0;
}
