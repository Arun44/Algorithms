#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
typedef long long ll;
typedef priority_queue<ll> pqll;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push
class birthday
{
    ll no,temp; pqll att;ll count = 0;
    public:
    void inp()
    {
      cin >> no;
      forl(i,0,no)
      {
          cin >> temp;att.pb(temp);   
      }
      comp();
    }
    void comp()
    {
        temp = att.top();att.pop();count = count + 1;
        while(att.empty()==false)
        {
             if(att.top()==temp)
             {
                 count = count + 1; att.pop();    
             }
             else
             {
                break;    
             }
        }
        cout << count << endl;
    }
};

int main() 
{
    birthday d;
    d.inp();
    return 0;
}

