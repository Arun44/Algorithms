class Solution 
{
    char temp;map<char,int> att;map<char,int> ayy;int ans;bool y=true;
    public:
    int firstUniqChar(string s) 
    {
        for(int i=0;i<s.size();i++)
        { 
            temp = s.at(i);
            if(att.count(temp)==0)
            { 
                att[temp]=1;ayy[temp]=i;
            }
            else
            {
                att[temp]++;
            }
        }
        for(int i=0;i<s.size();i++)
        {  
            temp=s.at(i);
            if(att[temp]==1)
            {
                y=false;ans=ayy[temp];
                break;
            }
        }
        if(y==false)
        {
            return ans;
        }
        else
        {
            return -1;
        }
    }
};