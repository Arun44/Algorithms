#include <bits/stdc++.h>
using namespace std;
typedef int ll;
typedef vector<ll> vll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
ll a[1001][1001]={0}; ll process[1001][1001]={0};
class sea
{
    ll n,m,noque,temp,nocount=0,x,y;
    ll t1,t2,t3,t4,t5,t6,t7,t8;
    public:
    void inp()
    {
        //ios_base::sync_with_stdio(false);
        scanf("%d %d %d",&n,&m,&noque);
        forl(i,1,n+1)
        {
            forl(j,1,m+1)
            {
                scanf("%d",&temp);
                if(temp==1)
                {
                    nocount = nocount + 1;
                    a[i][j] = temp;
                }
                
            }
        }
        forl(i,0,noque)
        {
            scanf("%d %d",&x,&y);
            if(a[x][y]!=0)
            {
                  if(process[x][y]==0)  //not been processed before :)
                  {
                       dfs(x,y);
                       nocount = nocount-1;
                  }
                  
            }
            printf("%d\n",nocount);
        }
        
    }
    void dfs(ll tx,ll ty)
    {
        process[tx][ty]=-1; //they are processed :)
        t1 = tx+1; t2=ty;
        if ((t1<=n)&&(t1>=1) && (t2<=m)&&(t2>=1))
        {
             if ((a[t1][t2]==1)&&(process[t1][t2]==0))
             {
                 nocount = nocount - 1;
                 dfs(t1,t2);
             }
        }
        t3 = tx-1 ; t4=ty;
        if ((t3<=n)&&(t3>=1) && (t4<=m)&&(t4>=1))
        {
             if ((a[t3][t4]==1)&&(process[t3][t4]==0))
             {
                 nocount = nocount - 1;
                 dfs(t3,t4);
             }
        }
        t5 = tx; t6 = ty+1;
        if ((t5<=n)&&(t5>=1) && (t6<=m)&&(t6>=1))
        {
             if((a[t5][t6]==1)&&(process[t5][t6]==0))
             {
                 nocount = nocount - 1;
                 dfs(t5,t6);
             }
        }
        t7 = tx;t8 = ty-1;
        if ((t7<=n)&&(t7>=1) && (t8<=m)&&(t8>=1))
        {
             if ((a[t7][t8]==1)&&(process[t7][t8]==0))
             {
                 nocount = nocount - 1;
                 dfs(t7,t8);
             }
        }
        return;
    }
};
int main()
{
    sea a;
    a.inp();
    return 0;
}
