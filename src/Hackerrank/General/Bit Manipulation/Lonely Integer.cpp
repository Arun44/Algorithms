#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
class uniqu
{   
    int n,temp; vector<int> array;int t=0;
    public:
    void yes()
    {
       cin >> n ;
       for(int i=0;i<n;i++)
       {
           cin >> temp; array.push_back(temp);
       }
       cal();
    }
    void cal()
    { 
        for(unsigned int i=0;i<array.size();i++)
        {
            t = t ^ array.at(i);
        }
        cout << t;
    }
};
int main()
{ 
    uniqu rt;
    rt.yes();
    return 0;
}







