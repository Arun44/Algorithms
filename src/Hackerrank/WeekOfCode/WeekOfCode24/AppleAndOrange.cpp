#include <iostream>
#include <vector>
using namespace std;
int main()
{
   
    int temp; int count1=0; int count2=0;
    int s,t;
    int a,b;
    int m,n;
    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;
    for(int i=0;i<m;i++)
    {
        cin >> temp;
        if(temp>0)
        {
        if ((a+temp>=s) && (a+temp<=t))
            {
              count1=count1 +1;   
            }
        }
        else
        {
            continue;
        }
    }
    for(int i=0;i<n;i++)
    {
        cin >> temp;
        if(temp<0)
        {
              if ((b+temp>=s) && (b+temp<=t))
              {
                  count2=count2+1;
              }
        }
        else
        {
            continue;
        }
    }
    cout << count1 << endl;
    cout << count2 << endl;
    return 0;
}