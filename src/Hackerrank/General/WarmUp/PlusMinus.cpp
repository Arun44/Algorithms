#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
   float n; cin >> n; float temp;
   float p1=0;float n1=0;float z1=0;
   for(int i=0;i<n;i++)
   {
     cin >> temp;
     if(temp==0) { z1=z1+1;} 
     else if(temp>0) { p1=p1+1;}
     else if(temp<0) { n1=n1+1;}
   }
   //cout << p1 << z1 << n1<< endl;
   printf("%0.7f\n",(p1/n));
   printf("%0.7f\n",(n1/n));
   printf("%0.7f\n",(z1/n));
   return 0;
}