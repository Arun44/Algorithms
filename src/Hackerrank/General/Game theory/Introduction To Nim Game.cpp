#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
class tu
{
    int g; int n; 
    vector<int> arr; vector<string> opt;int temp;
    int x=0;
    int c=0;
public:
    void getip()
    {
        cin >> g;
        while(c<g)
        {
            cin >>n;
            for(int i=0;i<n;i++)
            {
                cin >> temp; arr.push_back(temp);
            }
            ex(arr);
            c=c+1;
            arr.clear();
            x=0;
        }
        for(unsigned int i=0;i<opt.size();i++)
        {
            cout << opt.at(i) << endl;
        }
    }
    void ex(vector<int>& arr)
    {
         for(unsigned int i=0;i<arr.size();i++)
         {
             x=x ^ arr.at(i);
         }
         if(x==0)
         {
             opt.push_back("Second");
         }
         else
         {
             opt.push_back("First");
         }
    }
    
};
int main()
{
    tu t;
    t.getip();
    return 0;   
}


