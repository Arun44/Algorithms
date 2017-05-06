#include <iostream>
#include <vector>
#include <memory>
using namespace std;
int main()
{
    vector<int> alice; int temp; int count1=0;int count2=0;
    vector<int> bob;
    for(int i=0;i<3;i++)
    {
        cin >> temp;
        alice.push_back(temp);
    }
    for(int i=0;i<3;i++)
    {
        cin >> temp;
        bob.push_back(temp);
    }
    int k=0;
    while(k<3)
    {
        if(alice.at(k) > bob.at(k))
        {
            count1=count1+1;
            k=k+1;
        }
        else if(bob.at(k) > alice.at(k))
        {
            count2=count2+1;
            k=k+1;
        }
        else
        {  
            k=k+1;
           continue;
        }
    }
    cout << count1 << " " << count2 ;
    return 0;
}