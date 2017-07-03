#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef list<pll> lil;
typedef priority_queue<pll,vector<pll>,greater<pll>> pqll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
lil *a;
class play
{
    ll notest,n,m,tem1,tem2,weight,noque,dest,timet;
    vll distance;
    pll temp;
    pqll wait;
    public:
    void inp()
    {
        cin >> notest;
        while(notest--)
        {
            cin >> n >> m;
            a = new lil[n+1];
            distance.pb(0);
            forl(i,0,n)
            {
                distance.pb(1e9);
            }
            forl(i,0,m)
            {
                cin >> tem1 >> tem2 >> weight;
                a[tem1].pb(mp(weight,tem2));
                a[tem2].pb(mp(weight,tem1));
            }
            wait.push(mp(0,1));distance[1]=0;
            while(wait.empty()==false)
            {
                 temp = wait.top();
                 wait.pop();
                 djik();
            }
            cin >> noque;
            while(noque--)
            {
                cin >> dest >> timet ;
                //cout << distance[dest] << endl;
                if(distance[dest]!=1e9)
                {
                     if ((2*distance[dest])<=timet) 
                     {
                         cout << timet-(2*distance[dest]) << endl;
                     }
                     else
                     {
                         cout << 0 << endl;
                     }
                }
                else
                {
                    cout << 0 << endl;
                }
            }
            distance.clear(); 
        }
    }
        void djik()
        {
            //cout << "united" << endl;
            for(auto it=a[temp.second].begin();it!=a[temp.second].end();it++)
            {     
                   //cout << "barca" << endl;
                   if( distance[it->second] > distance[temp.second] + it->first )
                   {
                       //cout << "real" << endl;
                       distance[it->second] = distance[temp.second] + it->first ;
                       wait.push(mp(distance[it->second],it->second));
                   }
            }
            return ;
        }
    
};
int main()
{
    play p;
    p.inp();
    return 0;
}
