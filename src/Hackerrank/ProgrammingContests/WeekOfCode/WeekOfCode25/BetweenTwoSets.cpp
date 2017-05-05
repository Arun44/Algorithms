#include <iostream>
#include <vector>
#include <iterator>
#include <memory>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> a;
    vector<int> b;
    vector<int>:: iterator it;
    vector<int>:: iterator itr;
    vector<int>:: iterator it1;
    vector<int>:: iterator itr1;
    int n,m;
    int temp; int temp1;
    int sl;int el;
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        cin >> temp;
        a.push_back(temp);
    }
    for(int i=0;i<m;i++)
    {
        cin >> temp1;
        b.push_back(temp1);
    }
    it=a.begin();itr=a.end();
    it1=b.begin();itr1=b.end();
    sort(it,itr); sort(it1,itr1);
    sl=a.back();el=b.front();
   // cout << sl << " " << el;
    int count=0; bool g=true; bool t=true;
    for(int i=sl;i<=el;i++)
    {
        t=true; g=true;
        for(int k=0;k<n;k++)
        {
             if(i% ((a.at(k)))==0)
             {
                 continue;
             }
             else
             {
              t=false;  
              break; 
             }
        }
        if(t!=false)
        {
            for(int l=0;l<m;l++)
            {
                if( ((b.at(l))%i) ==0)
                {
                    continue;
                }
                else
                {   
                    g=false;
                    break;
                }
            }
        }
        if ((g==true) && (t==true))
        {
            count=count+1;
        }
    }
    cout << count << endl;
    return 0;
}