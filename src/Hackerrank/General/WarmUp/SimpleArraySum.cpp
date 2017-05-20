#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n; int sum=0; int temp;
    cin >> n; 
    for(int i=0;i<n;i++)
    {   
        cin >> temp;
        sum=sum + temp;
    }
    cout << sum << endl;
    return 0;
}