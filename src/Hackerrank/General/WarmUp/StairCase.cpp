#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main()
{
   int n; 
   int l=5;
    cin >> n ; int yu=1;
    int k=0; int w=n-1;;  // n-w is the key
    while(k<n)
    {
      for(int i=0;i<w;i++)
      {    
      cout << " " ;
      } 
      for(int i=0;i<yu;i++)
      {
          cout << "#" ;
       }
       cout << endl;
       w=w-1;
       k=k+1;
       yu=yu+1;
    }
    return 0;
}