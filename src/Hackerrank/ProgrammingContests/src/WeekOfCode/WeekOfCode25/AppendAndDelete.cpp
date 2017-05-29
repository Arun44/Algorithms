#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
#include <iterator>
using namespace std;
class old{
    string s; string t;
    int k;
    int sl;int tl;
    string ans; int nodel; int diff; int ny;
public:
    void getip()
    {
        cin >> s ;
        cin >>t;
        cin >> k;
        sl=s.length();tl=t.length();
    }
    void lencom()
    {
        if(sl==tl)
        {
            if(s.compare(t)==0)
            { 
                
               if (k>=2*s.length())
                {
                    cout << "Yes";
                }
                else
                {
                    if(k%2==0)
                    {
                        cout << "Yes";
                    }
                    else
                    {
                        cout << "No";
                    }
                }
            }
            else
            {
                ans=compa(s,t);
                cout << ans ;
            }
        }
        else if(sl>tl)
        {
          diff=s.length()-t.length();   
          if(k<diff) 
          {
              cout << "No" ;
          } 
          else if(k==diff)
          {
               string tem=s.substr(0,t.length());
               if(tem.compare(t)==0)
               {
                   cout << "Yes";
               }
               else
               {
                   cout << "No";
               }
          } 
          else
          {
             k=k-diff; 
             string temp=s.substr(0,t.length()); 
             if(temp.compare(t)==0)
             {
                 if(k%2==0)
                  {
                     cout << "Yes" ;
                  }
                  else{
                      cout << "No" ;
                  }
            }
            else
            {
                ans=compa(temp,t);
                cout << ans;
            } 
          }
        }
        else
        {
             diff=t.length()-s.length();
             if(k<diff)
             {
                 cout << "No" ;
             }
             else if(k==diff)
             {
                 string te=t.substr(0,s.length());
                 if(te.compare(s)==0)
                 {
                     cout << "Yes";
                 }
                 else
                 {
                     cout << "No";
                 }
             }
             else
             {
                 if(k>=2*t.length())
                 {
                      cout << "Yes";
                 }
                 else
                 {
                      bool x=true;
                      for(int i=0;i<s.length();i++)
                      {
                          if(s.at(i)==t.at(i))
                          {
                              continue;
                          }
                          else
                          {
                              nodel=s.length()-i;
                              x=false;
                              break;
                          }
                      }
                      if(x==true)
                      {
                          nodel=0;
                      }
                      if(nodel==0)
                      {
                           k=k-diff;
                           if(k%2==0)
                           {
                               cout << "Yes";
                           }
                           else
                           {
                               cout << "No";
                           }
                      }
                      else
                      {
                          ny= diff+(2*nodel);
                          if(k<ny)
                          {
                              cout << "No";
                          }
                          else if(k==ny)
                          {
                              cout << "Yes";
                          }
                          else
                          {
                              k=k-ny;
                               if(k%2==0)
                               {
                                   cout << "Yes";
                               }
                               else
                               {
                                   cout << "No";
                               }
                          }
                               
                      }
                 }
                     
             }
        }
    }
    string compa(string w1,string w2)
    {
        for(int i=0;i<w1.length();i++)
        {
            if(w1.at(i)==w2.at(i))
            {
                continue;
            }
            else
            {
                nodel = w1.length()-i;
                break;
            }
        }
        if(k>=(2*nodel))
        {
               if (k>=2*w1.length())
                {
                     return "Yes";
                }
                else
                {
                    if(k%2==0)
                    {
                        return "Yes";
                    }
                    else
                    {
                        return "No";
                    }
                }   
        }
        else
        {
            return "No" ;
        }
    }
    
};
int main()
{
    old p;
    p.getip();
    p.lencom();
}