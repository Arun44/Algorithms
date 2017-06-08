#include <iostream>
#include <list>
#include <utility>
#include <vector>
#include <cstdio>
#include <deque>
#include <iterator>
#include <queue>
using namespace std;
typedef long long ll;
ll n,m;
class floyd
{   
    ll v;ll tem1;ll tem2;ll ew;list<pair<ll,ll>>* a;
    ll s,d; pair<ll,ll> temp; ll k;
    vector<ll> distance; vector<ll> parent; vector<ll> process;
    priority_queue<pair<ll,ll>> makeque;ll total = 0;
    public:
    floyd(ll v)
    {
        this->v=v;
        a = new list<pair<ll,ll>>[v+1];
    }
    void create()
    {
           for(ll i=0;i<=n;i++)
                {
                    process.push_back(-1);
                    distance.push_back(1000000000000000);
                }
        for(ll i=0;i<m;i++)
       { 
       cin >> tem1 >> tem2 >> ew; 
       a[tem1].push_back(make_pair(ew,tem2)); 
       a[tem2].push_back(make_pair(ew,tem1));
       }                          //edge weight,node value 
               s=1;
               distance[s]=0;  
               makeque.push(make_pair(0,s));  
                   for(ll i=1;i<=n;i++)
                   {
                       if(i==s) {  continue;} 
                       else {  makeque.push(make_pair(1000000000000000,i));
                                               }   
                   }                                // node weight,node value
               while(makeque.empty()==false)
               {
                     temp=makeque.top();
                     if(temp.first==1000000000000000)
                       {
                         makeque.pop();
                       }
                         else
                         {
                            process[temp.second]=1;
                            makeque.pop();
                            k=temp.second; //node value;
                             for(auto it=a[k].begin();it!=a[k].end();it++) //doing a breadth first search 
                             {
                                 if(it->second==s)
                                 {
                                     continue;
                                 }
                                 else
                                 {    
                                   //it->first denotes the edge weight,it->second denotes the node for which
                                   // the distance is being computed :)
                                      if(distance[it->second] > distance[k]+ it->first)
                                      {
                                         distance[it->second] = distance[k]+ it->first; 
                                         makeque.push(make_pair(distance[it->second],it->second));
                                         //here the new distance for the node from the source node is pushed first
                                         // followed by the node itself;
                                      }
                                      
                                 }
                                 /*
                                 if(process[it->second]==1)
                                 {
                                     continue;
                                 }
                                 else
                                 {
                                     
                                     makeque.push(make_pair(distance[it->second],it->second));
                                     
                                 }
                                  */
                             }
                          }
                 }
                      /* if(distance[d]==100000000)
                       {
                           cout << -1 << endl;
                       }
                       else
                       {
                           //cout << distance[d] << endl;
                           total = total + distance[d] ;
                       }*/
                 for(ll i=1;i<=n;i++)
                 {
                     total = total + distance[i];
                 }
                 cout << total << endl;      
                    
                      
    }
    
};
int main()
{
    cin  >> n >> m; //no of cities and no of roads
    floyd conor(n);
    conor.create();
    return 0;
}