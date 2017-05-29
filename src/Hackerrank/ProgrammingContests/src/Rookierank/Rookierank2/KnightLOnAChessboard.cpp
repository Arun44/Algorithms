#include <iostream>
#include <list>
#include <vector>
#include <cstdio>
#include <utility>
#include <deque> 
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef list<pll> lpll;
typedef vector<ll> vll;
typedef deque<pll> dqll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define forn(i,a,b) for(sz i=a;i<=b;i++)
#define pb push_back
#define mp make_pair
ll visited[25][25];ll pre[25][25];ll dis[25][25];
class knight
{  
    ll d1=0;ll d2=0;dqll wait;pll temp;ll cou=0;ll t1,t2,t3,t4,t5,t6,t7,t8;bool yp=true;ll n;
    public:
    void getinp()
    {
       cin >> n;
       forn(a,1,n-1)
         {   
             forn(b,1,n-1)
                 {
                       d1=0;d2=0;
                       wait.pb(mp(d1,d2));
                               forl(i,0,n)
                               {
                                   forl(k,0,n)
                                   {
                                        visited[i][k]=0;pre[i][k]=0;dis[i][k]=0;      
                                   }
                               }
                        while(wait.empty()==false)
                       {
                            if(yp==true)
                             {   
                                temp=wait.front();
                                wait.pop_front();
                                d1=temp.first ;d2=temp.second;
                                ct(a,b);
                            }
                            else
                            {
                                wait.clear();
                                break;
                            }
                       }
                       if(yp==true)
                       {
                           cout << -1 << " " ;
                       }
                       else
                       {
                          cout << dis[n-1][n-1] << " ";
                       }
                      yp=true;
                 }
                 cout << endl;
         }
    }
    void ct(ll a,ll b)
    {
          cou=dis[d1][d2]+1;
         //formula
          for(ll q=0;q<2;q++) 
               {
                  if(q==0)
                      {
                         t1=d1+a;t2=d2+b; t3=d1-a;t4=d2-b; t5=d1+a;t6=d2-b; t7=d1-a;t8=d2+b;
                      }
                      else
                      {
                         t1=d1+b;t2=d2+a; t3=d1-b;t4=d2-a; t5=d1+b;t6=d2-a; t7=d1-b;t8=d2+a;   
                      }
                  if (((t1>=0)&&(t1<=n-1)) && ((t2>=0)&&(t2<=n-1)))
                  {  
                      if(pre[t1][t2]==0)
                          {
                            wait.pb(mp(t1,t2));
                            pre[t1][t2]=1;
                            dis[t1][t2]=cou;
                                if ((t1==n-1)&&(t2==n-1))
                                 {
                                    yp=false;
                                    return;
                                 }
                           }
                   }
                  if (((t3>=0)&&(t3<=n-1)) && ((t4>=0)&&(t4<=n-1)))
                  {  
                      if(pre[t3][t4]==0)
                          {
                            wait.pb(mp(t3,t4));
                            pre[t3][t4]=1;
                            dis[t3][t4]=cou;
                              if ((t3==n-1)&&(t4==n-1))
                                 {
                                    yp=false;
                                    return;
                                 }
                           }
                   }
                   if (((t5>=0)&&(t5<=n-1)) && ((t6>=0)&&(t6<=n-1)))
                   {  
                      if(pre[t5][t6]==0)
                          {
                            wait.pb(mp(t5,t6));
                            pre[t5][t6]=1;
                            dis[t5][t6]=cou;
                               if ((t5==n-1)&&(t6==n-1))
                                 {
                                    yp=false;
                                    return;
                                 }
                           }
                   }
                   if (((t7>=0)&&(t7<=n-1)) && ((t8>=0)&&(t8<=n-1)))
                   {  
                      if(pre[t7][t8]==0)
                          {
                            wait.pb(mp(t7,t8));
                            pre[t7][t8]=1;
                            dis[t7][t8]=cou;
                              if ((t7==n-1)&&(t8==n-1))
                                 {
                                    yp=false;
                                    return;
                                 }
                           }
                   }
          }
          pre[d1][d2]=1;
     }
};
int main()
{
    knight g;
    g.getinp();
    return 0;
}