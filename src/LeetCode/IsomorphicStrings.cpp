class Solution 
{   
    map<char,pair<int,char>> a ; map<char,pair<int,char>> b;pair<int,char> m;pair<int,char> n;
    char temp,tem;
    public:
    bool isIsomorphic(string s, string t) 
    {
            for(int i=0;i<s.size();i++)
            {

                  temp = s.at(i);tem = t.at(i);m=a[temp];n=b[tem];
                  if((m.first == 0)&&(n.first==0)) //if the character occurs for the first time in s and t
                  {
                      m.first=1;n.first=1;
                      m.second=tem;n.second = temp ;
                      a[temp]=m; b[tem]=n;
                  }
                  else if((m.first==0)&&(n.first!=0)) //string s character appearing for the first time but character in string t already came 
                  {
                      return false; 
                  }
                  else if ((m.first!=0)&&(n.first==0))
                  {
                      return false;
                  }
                  else
                  {
                      if(m.second!=tem)
                     {
                         return false;
                     }
                  }
            }
            return true;
    }
};