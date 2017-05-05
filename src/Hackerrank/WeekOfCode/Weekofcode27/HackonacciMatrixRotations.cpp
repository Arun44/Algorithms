#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;
class op
    {
    ll n;ll q;ll angle;ll count;ll row,column,temp;ll k;ll tr=1; vector<ll> ans;ll change=0;
    ll ku;vector<ll> rem;ll der;ll xy;ll xz;
    public:
    void create()
    {
                cin >> n >> q;
                vector<ll> query;
                vector<vector<ll>> a(n,vector<ll>(n,0));
                vector<vector<ll>> b(n,vector<ll>(n,0));
                 ans.push_back(0);
                 rem.push_back(0);
                for(int i=1;i<=7;i++)
                {
                    if ((i==2)||(i==4)||(i==6))
                    {
                        rem.push_back(24);
                    }
                    else
                    {
                        rem.push_back(23);
                    }
                }
                
                    xz=-1;xy=-1;
                    for(int i=1;i<=n;i++)
                    {
                            xz=xz+1;
                        for(int j=1;j<=n;j++)
                            {
                                xy=xy+1;
                                 ku=(i*j);
                                 ku=pow(ku,2);
                                 ku=ku%7; 
                                 if(ku==0){ku=7;}
                                 if(rem.at(ku)==24)
                                     {
                                      a[xz][xy]=1;
                                      b[xz][xy]=1;
                                 }
                                 else
                                     {
                                     a[xz][xy]=-1;
                                     b[xz][xy]=-1;
                                 }
                                   
                                 //a.at(i).at(j)=tr;
                                // tr=tr+1;
                                
                        }
                        xy=-1;
                    }
                    /*
                     for(int i=0;i<n;i++)
                        {
                            for(int j=0;j<n;j++)
                                {
                                    cout << a[i][j] << " ";
                                }
                                cout << endl;
                        }
                       */
        for(int i=0;i<q;i++)
            {
                cin >> angle;
                query.push_back(angle);
                
        }
        
        if ((n%2==0)||(n%2!=0))// even
            {  
               // cout << "united";
                       for(int h=0;h<3;h++)
                      {    
                               // count=0;row=1;column=1;k=0;
                               // count=count+1;row=row+1;column=column+1;k=k+1;
                                 /*  
                                  for(int i=0;i<(n/2);i++)
                                  {
                                     
                                      for(int j=i;j<(n-i-1);j++)
                                      {
                                          temp=a.at(i).at(j);
                                          a.at(i).at(j)=a.at(j).at(n-i-1);
                                          a.at(j).at(n-i-1)=a.at(n-i-1).at(n-i-1);
                                          a.at(n-i-1).at(n-j-1)=a.at(n-j-1).at(i);
                                          a.at(n-j-1).at(i)=temp;
                                          
                                      }
                                  }
                                  */
                                  for(int i=0; i<n/2; i++)
                                  {
                                      for(int j=0; j<(n+1)/2; j++)
                                          {
                                             cyclic(a[i][j], a[n-1-j][i], a[n-1-i][n-1-j], a[j][n-1-i]);
                                          }
                                  }
                                  
                                //comparison :)
                                              for(int i=0;i<n;i++)
                                                    {
                                                       for(int j=0;j<n;j++)
                                                        {
                                                            if(a.at(i).at(j)==b.at(i).at(j))
                                                            {
                                                                continue;
                                                            }
                                                            else
                                                            {
                                                                change=change+1;
                                                            }
                                                        }
                                                        
                                                    }
                                                    ans.push_back(change);
                                                    change=0;
                                    
                    }
           }
           
           
           for(unsigned int i=0;i<query.size();i++)
           {
                der=(query.at(i)/90)%4;
                cout << ans.at(der) << endl;
           }
           
           
           
       /*
        for(int i=0;i<n;i++)
            {
            for(int j=0;j<n;j++)
                {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }*/
    }
    void cyclic(ll &a, ll &b, ll &c, ll &d)
   {
           int temp = a;
           a = b;
           b = c;
           c = d;
           d = temp;
   }
    
};

int main() {
    op o ;
    o.create();
    return 0;
}


