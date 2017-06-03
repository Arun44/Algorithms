class Solution 
{ 
    char tem;
    map<char,int> att;map<char,int>:: iterator mit;bool p=false;int count=0;
    public:
    int longestPalindrome(string s) 
    {
        for(int i=0;i<s.size();i++)
        {
            tem = s.at(i);
            att[tem]++;
        }
        for(mit=att.begin();mit!=att.end();mit++)
        {
            if ((mit->second)%2==0)
            {
                count = count + mit->second ;
            }
            else
            {
                p=true;
                count = count + (mit->second)-1;
            }
        }
        if(p==true)
        {
            return count+1;
        }
        else
        {
            return count;
        }
    }
};