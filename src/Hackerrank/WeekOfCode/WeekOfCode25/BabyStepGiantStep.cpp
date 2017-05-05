#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <iterator>
#define ll long long
using namespace std;
class ty{
    ll int q; ll int a; ll int b; ll int d;int c=0;
    ll int count=0; vector<ll int> opt;
    public:
    void getip()
    {
        cin >>q;
        while(c<q)
        {
        count=0;    
        cin >> a>> b>> d ;
        ex(a,b,d,count);
        c=c+1;
        }
        
    }
    void ex(ll int& a,ll int& b,ll int& d,ll int& count)
    {
        if(d==0)
        {
            opt.push_back(count);
            return;
        }
        if(2*b>=d)
        {
            if((d==a) || (d==b))
            {
                count=count+1;
                opt.push_back(count);
                return;
            }
            else
            {
                count=count+2;
                opt.push_back(count);
                return;
            }
        }
        else
        {
            d=d-b;
            count=count+1;
            ex(a,b,d,count);
        }
    }
    void pr()
    {
        for(unsigned int i=0;i<opt.size();i++)
        {
            cout << opt.at(i) << endl;
        }
    }
};
int main()
{
    ty u;
    u.getip();
    u.pr();
    return 0;
}