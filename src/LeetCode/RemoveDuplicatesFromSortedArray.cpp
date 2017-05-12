class Solution 
{
    int count=0;int temp;int k=0;
    public:
    int removeDuplicates(vector<int>& nums) 
    {
         for(unsigned int i=0;i<nums.size();i++)
         {
              if(i==0)
              {
                 count = count + 1;
                 temp = nums.at(i);k=k+1;
               }
               else
               {
                    if(nums.at(i)!=temp)
                    {
                        temp = nums.at(i);
                        count = count + 1;
                        nums.at(k)=nums.at(i);
                        k=k+1;
                    }
                }
        }
         return count;
    }
};