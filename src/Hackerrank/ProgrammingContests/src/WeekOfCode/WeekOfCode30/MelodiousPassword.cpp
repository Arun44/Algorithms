#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef string s;
typedef char c;
typedef vector<s> vss;
typedef long long ll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
class pass
{
    ll n;vss vowels={"a","e","i","o","u"};
    vss cons = {"b","c","d","f","g","h","j","k","l","m","n","p","q","r","s","t","v","w","x","z"};
    vss tem;
    public:
    void gp()
    {
        cin >> n;    
        if(n%2==0)
        {
             if(n==2)
             {
                  forl(i,0,vowels.size())
                  {
                      forl(k,0,cons.size())
                      {
                          cout << vowels.at(i) << cons.at(k) << endl;
                          cout << cons.at(k) << vowels.at(i) << endl;
                      }
                  }
             }
             if(n==4)
             {
                  forl(i,0,vowels.size())
                  {
                      forl(k,0,cons.size())
                      {
                          forl(z,0,vowels.size())
                          {
                              forl(x,0,cons.size())
                              {
                                  cout<<vowels.at(i)<<cons.at(k)<<vowels.at(z)<<cons.at(x)<< endl;
                                  cout<<cons.at(x)<<vowels.at(z)<<cons.at(k)<<vowels.at(i)<< endl;
                              }
                          }
                      }
                  }    
             }
            if(n==6)
            {
                forl(i,0,vowels.size())
                  {
                      forl(k,0,cons.size())
                      {
                         forl(z,0,vowels.size())
                         {
                            forl(x,0,cons.size())
                            {
                                forl(z1,0,vowels.size())
                                {
                                    forl(z2,0,cons.size())
                                    {
                                       
                    cout<<vowels.at(i)<<cons.at(k)<<vowels.at(z)<<cons.at(x)<<vowels.at(z1)<<cons.at(z2)<<endl;
                    cout<<cons.at(z2)<<vowels.at(z1)<<cons.at(x)<<vowels.at(z)<<cons.at(k)<<vowels.at(i)<<endl; 
                                    }
                                }
                            }
                         }
                      }
                  }    
            }
        }
        else
        {
            if(n==1)
            {
                forl(i,0,vowels.size()) { cout << vowels.at(i) << endl;}
                forl(i,0,cons.size()) { cout << cons.at(i) << endl;  }
            }
            if(n==3)
             {
                  forl(i,0,vowels.size())
                  {
                      forl(k,0,cons.size())
                      {
                         forl(z,0,vowels.size())
                         {
                                cout<< vowels.at(i)<<cons.at(k)<<vowels.at(z)<<endl;
                                tem.pb(cons.at(k)+vowels.at(z));
                         }
                      }
                  }
                  forl(i,0,tem.size())
                  {
                    forl(k,0,cons.size())
                    {
                        cout << tem.at(i)<< cons.at(k)<< endl;    
                    }
                  }
                 
             }
            if(n==5)
             {
                  forl(i,0,vowels.size())
                  {
                      forl(k,0,cons.size())
                      {
                         forl(z,0,vowels.size())
                         {
                            forl(x,0,cons.size())
                            {
                                forl(z1,0,vowels.size())
                                { 
                      cout<<vowels.at(i)<<cons.at(k)<<vowels.at(z)<<cons.at(x)<<vowels.at(z1)<<endl;
                      tem.pb(cons.at(k)+vowels.at(z)+cons.at(x)+vowels.at(z1));              
                                }
                            }
                         }
                      }
                  }
                forl(i,0,tem.size())
                  {
                    forl(k,0,cons.size())
                    {
                        cout << tem.at(i)<< cons.at(k)<< endl;    
                    }
                  }
                
             }
            
        }
    }
    
};
int main()
{
    pass n;
    n.gp();
    return 0;
}

