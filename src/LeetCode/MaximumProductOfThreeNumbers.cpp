class Solution 
{ 
    public:
    int maximumProduct(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int t = nums.size();
        return max( (nums[t-1]*nums[t-2]*nums[t-3]), max((nums[0]*nums[1]*nums[t-1]),( nums[0]*nums[1]*nums[2]))) ;
    }
};