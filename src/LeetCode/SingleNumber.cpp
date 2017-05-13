class Solution 
{  
   int p=0; 
   public:
   int singleNumber(vector<int>& nums) 
   {
       for(int i=0;i<nums.size();i++)
        {
           p = p ^ nums.at(i);
        }
        return p;
    }
};