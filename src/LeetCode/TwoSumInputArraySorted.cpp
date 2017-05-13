class Solution 
{
     map<int,pair<int,int>> a; pair<int,int> p; vector<int> ans; int temp; 
     public:
     vector<int> twoSum(vector<int>& numbers, int target) 
     {
         for(int i=0;i<numbers.size();i++)
         {
             if(i==0)
             {
                temp = numbers.at(i);p=a[temp];p.first=1; p.second=i+1;
                a[temp]=make_pair(p.first,p.second);
             }
             else
            {
                temp = (target - numbers.at(i)) ; p=a[temp];
                if(p.first==1)
                {
                    ans.push_back(p.second);ans.push_back(i+1);
                    break;
                }
                else
                {
                     p=a[numbers.at(i)];p.first=1; p.second=i+1;
                     a[numbers.at(i)]=make_pair(p.first,p.second);
                }
            }
          }
          return ans;
     }
};