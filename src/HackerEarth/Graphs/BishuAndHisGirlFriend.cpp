#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef queue<pll> qpll;
typedef set<ll> sll;
typedef list<ll> lil;
typedef sll::iterator sit;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define forn(i,a,b) for(sz i=a;i<=b;i++)
#define pb push_back
#define mp make_pair
lil *att;
class gf
{
    ll no,tem1,tem2,t,prev,q; vll visited,girlfriend,distance;
    qpll wait;pll temp; bool r=true; sll ans; sit si;
    public:
    void inp()
    {
        cin >> no ;
        att = new lil[no+1];
        visited.pb(-1);girlfriend.pb(-1);distance.pb(0);
        forl(i,1,no+1)
        {
            visited.pb(-1); //creating the visited array :)
            girlfriend.pb(-1); //creating the girlfriends array :)
            distance.pb(0); //creating the distance array :)
        }
        forl(i,0,no-1)
        {
            cin >> tem1 >> tem2;
            att[tem1].pb(tem2);
            att[tem2].pb(tem1);
        }
        cin >> q ;
        forl(i,1,q+1)
        {
            cin >> tem1;
            girlfriend.at(tem1)=1; //where the girlfriends live :)
            
        }
        wait.push(mp(1,0));
        while(wait.empty()==false)
        {
                   temp = wait.front();wait.pop();
                     if(temp.second==0)
                     {
                         prev = temp.second;
                     }
                     else
                     {
                         if(temp.second!=prev) //meaning one sweep is complete :)
                         {
                             if(r==false)
                             {
                                 si = ans.begin();
                                 cout << *si << endl;
                                 return; 
                             }
                             else
                             {
                                  // meaning in the previous sweep the girlfriend has not been found
                                  // and there is a need to go to the next step :( 
                                  prev = temp.second ;
                             }
                         }
                     }
                     bfs(temp.first);
        }
    }
    void bfs(ll x)
    {
        t = distance.at(x); //giving the current distance parameter :)
        visited.at(x)=0;
        for(auto it=att[x].begin();it!=att[x].end();it++)
        {      
               //cout << "the value is" << *it << endl;
               if(visited.at(*it)==-1)    //not been visited before :)
               {
                   visited.at(*it)=0; //updating the visited array :)
                   distance.at(*it) = t + 1; //updating the distance array :)
                   wait.push(mp(*it,distance.at(*it))); //pushing it into the queue :)
                   if(girlfriend.at(*it)!=-1) //if girlfriend is found :)
                   {
                       //cout << *it << endl;
                       r = false; 
                       ans.insert(*it);
                   }
               }      
        }
        return ;
    }
};
int main()
{
    gf a;
    a.inp();
    return 0;
}
 
