class Solution 
{
   int fntpro=1;int bckpro=1; int ans=0;
   public: 
   int maxProduct(vector<int>& nums) 
   {
       int a = nums.size();
       for(int i=0;i<nums.size();i++)
       {
         fntpro = fntpro * nums.at(i);   
         bckpro = bckpro * nums.at((a-1)-i);
         //cout << fntpro << " " << bckpro ;
         if(i==0)
         {
             ans = max(fntpro,bckpro);
         }
         else
         {  
             ans = max(ans,max(fntpro,bckpro));
         }
         if(fntpro==0)
         {  
             fntpro=1;
         }
         if(bckpro==0) 
         {
            bckpro=1;
         }
        }
        return ans;
    }
};