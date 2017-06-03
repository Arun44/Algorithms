class Solution 
{
    map<int,int> att;map<int,int>::iterator mit;bool y=true;int count=0;int var;int prev;bool g=true;int temp;
    public:
    int longestConsecutive(vector<int>& nums)
    {
        if(nums.size()==0){return 0;}
        for(int i=0;i<nums.size();i++)
        {
            temp = nums[i];
            att[temp]++ ;
        }
        for(mit=att.begin();mit!=att.end();mit++)
        {
            if(y==true)
            {
                prev = mit->first; 
                count = count + 1;
                var=count;
                y=false;
            }
            else
            {
                if(mit->first==(prev+1))
                {
                    g=true;count = count + 1;prev=mit->first;
                }
                else
                {
                    g=false;
                    if(count>var){var=count;}
                    count=1;prev=mit->first;
                }
            }
        }
        if(g==true)
        {
            if(count>var){var=count;}
        }
        return var;
    }
};