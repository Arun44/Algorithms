#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class op
{
  int p,n;
  int m;int y;
  bool h=true;
  int point=0;
  public:
    void create()
    {
        cin >> n >> p;
        if(n%2!=0)
        {
            f1();
        }
        else
        {
            f2();
        }
    }
    void f1()
     {
        m=((n/2)+1);
        if(p>=m)
            {
            y=n;
            while(h==true)
                {
                if(p==y)
                    {
                    h=false;
                }
                else
                    {
                    if(y%2==0)
                        {
                        point=point+1;
                    }
                    y=y-1;
                }
            }
            cout << point;
        }
        else
            {
            y=1;
            while(h==true)
                {
                if(p==y)
                    {
                    h=false;
                }
                else
                    {
                    if(y%2!=0)
                        {
                        point=point+1;
                    }
                    y=y+1;
                }
            }
            cout << point;
            
        }
    }
    void f2()
        {
        m=(n/2);
        if(p>m)
            {
            y=n;
            while(h==true)
                {
                if(p==y)
                    {
                    h=false;
                }
                else
                    {
                    if(y%2==0)
                        {
                        point=point+1;
                    }
                    y=y-1;
                }
            }
            cout << point;
        }
        else
            {
            y=1;
            while(h==true)
                {
                if(p==y)
                    {
                    h=false;
                }
                else
                    {
                    if(y%2!=0)
                        {
                        point=point+1;
                    }
                    y=y+1;
                }
            }
            cout << point;
        }
    }
    
};

int main() {
    op o;
    o.create();
    return 0;
}

