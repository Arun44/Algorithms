class Solution 
{
    map<int,int> att;int temp;int n;
    public:
    int majorityElement(vector<int>& nums) 
    {   \
        n = nums.size();
        for(int i=0;i<nums.size();i++)
        {

            temp = nums.at(i);
            if(att.count(temp)==0)
           {
                att[temp]=1;
                if(att[temp]>(n/2))
                {
                  return temp;
                }
            }
            else
            {   
                att[temp] ++;
                if(att[temp]>(n/2))
                {
                  return temp;
                }
            }
        }
    }
};