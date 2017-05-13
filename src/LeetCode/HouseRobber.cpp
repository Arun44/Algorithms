#define MAX(a,b) ((a) > (b) ? a : b)
class Solution 
{   
    int t1=0;int t2=0;
    public:
    int rob(vector<int>& nums) 
    { 
        for(int i=0;i<nums.size();i++)
       {
           if(i%2 == 0)
            {
              t1 = MAX(t2,t1+nums.at(i));
            }
            else
            {
                t2 = MAX(t1,t2+nums.at(i));
            }
        }
       return MAX(t1,t2);
    }
};