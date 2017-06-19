#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string s;
typedef char c;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
class pat
{
    s a;ll no;int count=0;int overall=0;c prev;
    public:
    void inp()
    {
       cin >> no;
       while(no--)
       {
          cin >> a;
          forl(i,0,a.size())
          {
              
              if(a[i]=='1')
              {
                  if(count==1)
                  {
                     if(prev!='1')
                     {
                         overall = overall + 1; 
                     }
                  }
                  else
                  {
                      count = count+1;    
                  }
              }
              else
              {
                 if(a[i]!='0')
                 {
                     count=0;    
                 }
              }
              prev=a[i];
                       
          }
           cout << overall << endl;
           overall=0;count=0;
       }
    }
};
int main() 
{
    pat t;
    t.inp();
    return 0;
}
