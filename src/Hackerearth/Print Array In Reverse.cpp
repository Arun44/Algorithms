#include <iostream>
#include <vector>
#include <iterator>
#include <memory>
typedef long long ll;
using namespace std;
class rev
{
	ll n; vector<ll> array; ll temp;
	public:
	void create()
	{
		cin >> n;
		for(int i=0;i<n;i++)
		{
		  cin >> temp; 
		  array.push_back(temp);
		}
		reverse();
	}
	void reverse()
	{
		vector<ll>::iterator it;
		for(it=(array.end()-1);it>=array.begin();it--)
		{
			cout << *it << endl;
 		}
	}
};
int main()
{
   rev v;
   v.create();
   return 0;
}

