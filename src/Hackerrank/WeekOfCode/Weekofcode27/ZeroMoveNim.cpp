#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ul unsigned long int
class game
{
    ul g;ul n;vector<ul> array; ul temp; ul w=0;
    public:
    void create()
    {
        cin >> g;
        for(ul i=0;i<g;i++)
        {
           cin >> n;
           for(ul i=0;i<n;i++)
           {
               cin >> temp; 
                if(temp%2 == 0)
                 { 
                      array.push_back(temp-1);     
                  }  
                  else 
                  {
                       array.push_back(temp+1) ;  
                  }
           }
                for(unsigned int i=0;i<array.size();i++) 
                {
                    w = w ^ array.at(i); 
                 }
                  if(w==0) 
                    {cout << "L" << endl; } 
                    else {cout << 'W' << endl;} 
               w=0;
               array.clear();
        }
           
    }
    
};
int main() {
    game op;
    op.create();
    return 0;
}

