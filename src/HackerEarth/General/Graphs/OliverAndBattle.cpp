#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
ll a[1001][1001]={0};ll visited[1001][1001]={0};
class war
{
    ll testno;ll n,m,temp;
    ll count = 0 ;ll nocomp = 0;ll grtcount  = 0;
    public:
    void inp()
    {
        cin >> testno;
       /*
        forl(i,1,testno)
        {
            forl(j,1,testno)
            {
                a[i][j]=-1;
            }
        }*/
        /*
        forl(i,1,testno)
        {
            forl(j,1,testno)
            {
                cout << a[i][j] << "  ";
            }
            cout << endl;
        }*/
             while(testno--)
             {
                    cin >> n >> m;
                    forl(i,1,n+1)
                    {
                        forl(j,1,m+1)
                        {
                               cin >> temp ; a[i][j]=temp;
                        }
                    }
                    forl(i,1,n+1)
                    {
                        forl(j,1,m+1)
                        {
                             if(visited[i][j]==0)
                             {
                                 if(a[i][j]==1)
                                 {
                                      nocomp = nocomp + 1;
                                      dfs(i,j);
                                      count = count + 1; //to account for the root node :)
                                      if(count>grtcount)
                                      {
                                          grtcount = count ;
                                      }
                                      count = 0;
                                 }
                             }
                        }
                    }
                    cout << nocomp << " " << grtcount << endl;
                    grtcount = 0;nocomp=0;count=0;//a[1001][1001]={0};visited[1001][1001]={0};
                    forl(i,1,n+1){forl(j,1,m+1){a[i][j]=0;visited[i][j]=0;}}
             }
    }
    void dfs(ll x,ll y)
    {
         pll t1,t2,t3,t4,t5,t6,t7,t8;
         visited[x][y]=-1;  // indicating it has been visited :)
         t1 =mp(x+1,y) ; t2 =mp(x-1,y); //up and down 
         t3 =mp(x,y+1) ; t4 =mp(x,y-1); //right and left
         t5 =mp(x-1,y-1); t6=mp(x-1,y+1); //diagnol back left and right
         t7 =mp(x+1,y-1); t8=mp(x+1,y+1); //diagnoal front left and right
         if ( ((t1.first>=1) && (t1.first<=n))   &&  ((t1.second>=1)&&(t1.second<=m)))
         {
                   if(visited[t1.first][t1.second]==0)  //if it has not been visited before
                   {
                         if(a[t1.first][t1.second]==1)
                         {
                             count = count + 1;
                             visited[t1.first][t1.second]=-1; //indicating it has been visited :)
                             dfs(t1.first,t1.second);
                         }
                   }
         }
         if ( ((t2.first>=1) && (t2.first<=n))   &&  ((t2.second>=1)&&(t2.second<=m)))
         {
                   if(visited[t2.first][t2.second]==0)  //if it has not been visited before
                   {
                         if(a[t2.first][t2.second]==1)
                         {
                             count = count + 1;
                             visited[t2.first][t2.second]=-1; //indicating it has been visited :)
                             dfs(t2.first,t2.second);
                         }
                   }
         }
          if (((t3.first>=1) && (t3.first<=n))   &&  ((t3.second>=1)&&(t3.second<=m)))
         {
                   if(visited[t3.first][t3.second]==0)  //if it has not been visited before
                   {
                         if(a[t3.first][t3.second]==1)
                         {
                             count = count + 1;
                             visited[t3.first][t3.second]=-1; //indicating it has been visited :)
                             dfs(t3.first,t3.second);
                         }
                   }
         }
          if (((t4.first>=1) && (t4.first<=n))   &&  ((t4.second>=1)&&(t4.second<=m)))
         {
                   if(visited[t4.first][t4.second]==0)  //if it has not been visited before
                   {
                         if(a[t4.first][t4.second]==1)
                         {
                             count = count + 1;
                             visited[t4.first][t4.second]=-1; //indicating it has been visited :)
                             dfs(t4.first,t4.second);
                         }
                   }
         }
          if (((t5.first>=1) && (t5.first<=n))   &&  ((t5.second>=1)&&(t5.second<=m)))
         {
                   if(visited[t5.first][t5.second]==0)  //if it has not been visited before
                   {
                         if(a[t5.first][t5.second]==1)
                         {
                             count = count + 1;
                             visited[t5.first][t5.second]=-1; //indicating it has been visited :)
                             dfs(t5.first,t5.second);
                         }
                   }
         }
          if (((t6.first>=1) && (t6.first<=n))   &&  ((t6.second>=1)&&(t6.second<=m)))
         {
                   if(visited[t6.first][t6.second]==0)  //if it has not been visited before
                   {
                         if(a[t6.first][t6.second]==1)
                         {
                             count = count + 1;
                             visited[t6.first][t6.second]=-1; //indicating it has been visited :)
                             dfs(t6.first,t6.second);
                         }
                   }
         }
          if (((t7.first>=1) && (t7.first<=n))   &&  ((t7.second>=1)&&(t7.second<=m)))
         {
                   if(visited[t7.first][t7.second]==0)  //if it has not been visited before
                   {
                         if(a[t7.first][t7.second]==1)
                         {
                             count = count + 1;
                             visited[t7.first][t7.second]=-1; //indicating it has been visited :)
                             dfs(t7.first,t7.second);
                         }
                   }
         }
          if (((t8.first>=1) && (t8.first<=n))   &&  ((t8.second>=1)&&(t8.second<=m)))
         {
                   if(visited[t8.first][t8.second]==0)  //if it has not been visited before
                   {
                         if(a[t8.first][t8.second]==1)
                         {
                             count = count + 1;
                             visited[t8.first][t8.second]=-1; //indicating it has been visited :)
                             dfs(t8.first,t8.second);
                         }
                   }
         }
         return;
    }
};
int main()
{
    war r;
    r.inp();
    return 0;
}
