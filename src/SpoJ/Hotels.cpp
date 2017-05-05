#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cstdio>
#include <iterator>
#include <cmath>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define tyu(i,a,b) for(ll i=a;i<b;i++)
#define pb push_back
class fo
{
   ll n,m,temp; vll num;ll sum=0;ll rp,lp;ll anssum=0;
   public:
   void create()
   {
   	 cin >> n >> m;
   	 tyu(i,0,n)
   	 {
   	 	cin >> temp;
   	 	num.pb(temp);
   	 }
   	 cal();
   }
   void cal()
   {
   	 lp=0;rp=0;
   	 while(lp<n)
   	 {
   	 	while(rp<n && sum+num[rp]<=m)
   	 	{
   	 		sum += num[rp];rp++;
   	 	}
   	 	anssum= max(anssum,sum);
   	 	sum -= num[lp];
   	 	lp++;
   	 }
   	 cout << anssum << endl;
   }
   
   	
};
int main() {
	fo f;
	f.create();
	return 0;
}
