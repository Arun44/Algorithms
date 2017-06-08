#include <iostream>
#include <vector>
#include <cstdio>
#include <iterator>
using namespace std;
typedef long long ull;
typedef vector<ull> vull;
#define forl(i,a,b) for(ull i=a;i<b;i++)
#define forn(i,a,b) for(ull i=a;i<=b;i++)
#define pb push_back
class rt
{
    ull temp1,temp2,testno,target;ull a,b,c;
    vull att;
    ull mod=1000000007;
    public:
    void gp()
    {
        cin >> testno;
        forl(i,0,testno)
        {
            cin >> temp1 >> temp2 >> target;
            if ((target==0)||(target==1))
            {
                if(target==0)
                {
                    cout << temp1 << endl;
                }
                else
                {
                    cout << temp2 << endl;                }
            }
            else
              {   
                    att.pb(temp1);
                    att.pb(temp2);
                    forn(i,2,target)
                    {
                        att.pb(-1);
                    }
                    rev(target);
                    cout << (att.at(target))%mod << endl;
                    att.clear();
              }
           
        }
    }
        ull rev(ull k)
        { 
            
            if(att.at(k)!=-1)
            {
                return att.at(k);
            }
            else
            {
                a=rev(k-1) ;
                b=rev(k-2);
                att.at(k) = a+b + (a*b) ;
                return att.at(k);
            }
                    //a=temp1;b=temp2;
                    /*forn(i,2,target)
                    {   
                        c=a+b+(a*b);
                        a=b;b=c;
                    }
                    cout << (c%mod) << endl;*/
        }
        
    
    
};
int main()
{
    rt t;
    t.gp();
    return 0;
}
