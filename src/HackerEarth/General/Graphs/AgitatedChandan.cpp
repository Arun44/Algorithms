#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef list<pll> lipll;
typedef queue<pll> qpll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
lipll *a;
class trail
{
    ll testno,no,tem1,tem2,w,var,node;
    pll temp;
    vll process,process1;
    qpll wait;
    public:
    void inp()
    {
        cin >> testno;
        while(testno--)
        {
            cin >> no;
            a = new lipll[no+1];
            process.pb(-1);process1.pb(-1);
            forl(i,0,no)
            {
                process.pb(-1);process1.pb(-1);
            }
            forl(i,0,no-1)
            {
                cin >> tem1 >> tem2 >> w;
                a[tem1].pb(mp(tem2,w));a[tem2].pb(mp(tem1,w));
            }
            wait.push(mp(1,0)); var=-1; node=0;
            while(wait.empty()==false)
            {
                 temp = wait.front();wait.pop();
                 if(temp.second>var)
                 {
                     var = temp.second ; node= temp.first;
                 }
                 comp();
            }
            wait.push(mp(node,0)); var=-1;
            while(wait.empty()==false)
            {
                 temp = wait.front();wait.pop();
                 if(temp.second>var)
                 {
                     var = temp.second ; node= temp.first;
                 }
                 comp1();
            }
            if(var<100)
            {
                cout << 0 << " " << var <<  endl;
            }
            else if ((var>100)&&(var<1000))
            {
                cout << 100 << " " << var << endl;
            }
            else if ((var>1000)&&(var<10000))
            {
                cout << 1000 << " " << var << endl;
            }
            else 
            {
                cout << 10000 << " " << var << endl;
            }
            process.clear();process1.clear();a->clear();var=-1;
        }
    }
        void comp()
        {
            process[temp.first]=0;
            for(auto it=a[temp.first].begin();it!=a[temp.first].end();it++)
            {
                   if(process[it->first]==-1)
                   {
                        wait.push(mp(it->first,temp.second+it->second));
                        process[it->first]=0;
                   }
            }
            return;
        }
        void comp1()
        {
            process1[temp.first]=0;
            for(auto it=a[temp.first].begin();it!=a[temp.first].end();it++)
            {
                   if(process1[it->first]==-1)
                   {
                        wait.push(mp(it->first,temp.second+it->second));
                        process1[it->first]=0;
                   }
            }
            return;
        }
    
};
int main()
{
    trail t;
    t.inp();
    return 0;
}
