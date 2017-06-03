class Solution 
{
    int low;int high;int mid;
public:
    int findPeakElement(vector<int>& nums)
    {
        low = 0 ;high = nums.size()-1;
        while(low<=high)
        {
            if(low==high){ break;}
            mid = ((high-low) /2) + low ;
            if(nums[mid]<nums[mid+1])
            {
                low = mid+1;
            }
            else
            {
                high = mid;
            }
        }
        return low;
    }
};