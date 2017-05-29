#include <iostream>
#include <vector>
#include <string>
#include <memory>
using namespace std;
int main()
{
   int g;
   cin >> g;
   vector<string> ans;
   int nooftime(0); int noofcha; string a; char tempc; int dcount=0; int v;
    while(nooftime<g)
    {
        dcount=0;
        cin >> noofcha;
        cin >> a; vector<int> freq(26,0);
        for(unsigned int i=0;i<a.size();i++)
        {
           // cout << "united" ;
            tempc=a.at(i);
             v=tempc-'A';
             if(v==30){ dcount=dcount+1;}
             else { ++freq[v];}
        }
        if(dcount==0)
        {
             if(a.size()==1) 
             {
                 ans.push_back("NO");
                 nooftime=nooftime + 1;
             }
             else 
             {
                 int k=0; bool r=true;
                 while(r==true)
                 {
                     if (a.at(k) == a.at(k+1))
                     {
                         if ((k+1) == (noofcha-1))    //to check whtehr it is the last element
                         {
                             ans.push_back("YES");
                             nooftime=nooftime+1;
                             r=false;
                         }
                         k=k+1;
                     }
                     else
                     {
                         if(k==0)
                         {
                             ans.push_back("NO");
                             nooftime=nooftime+1;
                             r=false;
                         }
                         else
                        {
                             if ((k+1)== (noofcha-1))
                             {
                                 ans.push_back("NO");
                                 nooftime=nooftime+1;
                                 r=false;
                             } 
                             else
                             {
                                 k=k+1;
                            }  
                        }                      
                     }
                     
                 }
            }
        }
        else
        {
            int sum=0;
            for(unsigned int i=0;i<freq.size();i++)
            {
               sum=sum+ freq.at(i);   
            }
            if(sum==1)
            {
                ans.push_back("NO");
                nooftime=nooftime+1;
            }
            else
              {
                    int value=0; bool yu=true;
                    for(unsigned int i=0;i<freq.size();i++)
                    {
                       // cout << "apple";
                        value=value+ freq.at(i);
                        if (freq.at(i)==1) 
                        {
                            ans.push_back("NO");
                            nooftime=nooftime+1;
                            yu=false;
                            break;
                        }
                        
                    }
                    if(value==0)
                    {
                           ans.push_back("YES");
                           nooftime=nooftime+1;
                    }
                    else
                    {
                        if(yu==true)
                        {
                        ans.push_back("YES");
                        nooftime=nooftime+1;
                        }
                    }
              }     
        }
    }
    for(unsigned int i=0;i<ans.size();i++)
    {
        cout << ans.at(i) << endl;
    }
    return 0;
}