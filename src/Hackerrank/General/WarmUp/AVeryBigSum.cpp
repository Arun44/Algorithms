#include <iostream>
#include <vector>
using namespace std;
#define l long long
int main()
{
    int n;l int sum=0;
    l int temp;
    cin >> n; 
    for(int i=0;i<n;i++)
    {   
        cin >> temp;
        sum=sum + temp;
    }
    cout << sum << endl;
    return 0;
}