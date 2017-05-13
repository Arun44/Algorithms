class Solution 
{ 
    int n,p;
    public:
    void rotate(vector<int>& nums, int k) 
    {
        n=nums.size();vector<int> arr(n,0);
        for(int i=0;i<nums.size();i++)
        {
            p=(i+k)%n;arr[p] = nums.at(i);
        }
        for(int i=0;i<arr.size();i++)
        {
            nums[i] = arr[i];
        }
    }
};