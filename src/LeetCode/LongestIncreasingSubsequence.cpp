class Solution 
{
    vector<int> index;vector<int> value;int count=0;int temp;
    public:
    int lengthOfLIS(vector<int>& nums) 
    {
        if(nums.size()==0)
        {
            return 0;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
            {
                index.push_back(i);value.push_back(nums[i]);
            }
            else
            {
                if(nums[i]>=nums[index[count]])
                {
                    if(nums[i]>nums[index[count]])
                    {
                        index.push_back(i); value.push_back(nums[i]);count=count+1;
                    }
                }
                else
                {
                    if(nums[i]<nums[index[0]])
                    {
                        index[0]=i; value[0]=nums[i];
                    }
                    else
                    {
                        temp =  (std::lower_bound(value.begin(),value.end(),nums[i])-value.begin());
                         index[temp]=i;value[temp]=nums[i];
                    }
                }
            }
        }
        return count + 1;
    }
};