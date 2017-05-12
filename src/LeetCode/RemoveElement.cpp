class Solution 
{ 
     int k=0;int count = 0;
     public:
     int removeElement(vector<int>& nums, int val) 
     { 
         for(unsigned int i=0;i<nums.size();i++)
         {
             if(nums.at(i)!=val)
             {
                 nums.at(k)=nums.at(i);k=k+1;count = count + 1;
             }
         }
         return count;
    }
};