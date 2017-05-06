#include <iostream>
#include <vector>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int n; cin >> n;
    int array[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> array[i][j];
        }
    }
    int sum1=0;int sum2=0; int u=0;int y=0;
    while(u<n)
    {
        sum1=sum1+array[u][y];
        u=u+1;y=y+1;
    }
    int r=0;int e=n-1;
    while(r<n)
    {
        sum2=sum2+array[r][e];
        r=r+1; e=e-1;
    }
    cout << abs(sum2-sum1) << endl;
    return 0;
}