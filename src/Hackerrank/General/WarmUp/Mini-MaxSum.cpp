#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <iterator>
#include <memory>
#define l long long
using namespace std;
class rt
{
    l int temp; vector<l int>arr; l int mini,maxi;
public:
    void create()
    {
        for(int i=0;i<5;i++)
        {
            cin >> temp;
            arr.push_back(temp);
        }
      calc();  
    }
    void calc()
    {
        mini=0;maxi=0;
        sort(arr.begin(),arr.end());
        for(vector<l int>::iterator it=arr.begin();it<arr.end()-1;it++)
        {
            //cout << "united" << " " << endl;
            mini = mini + *it;
        }
        for(vector<l int>::iterator itr=arr.begin()+1;itr<arr.end();itr++)
        {
            //cout << "real" << " " << endl;
            maxi = maxi + *itr;
        }
        cout << mini << " " << maxi;
    }
};
int main()
{
    rt u;
    u.create();
    return 0;
}