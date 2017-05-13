class Solution 
{
    map<char,int> att;char temp;map<char,int> ayy;map<char,int>::iterator mit;
    public:
    char findTheDifference(string s, string t) 
    {
        for(int i=0;i<s.size();i++)
        {
            temp = s.at(i);att[temp]++;
        }
        for(int i=0;i<t.size();i++)
        {
            temp = t.at(i);
            ayy[temp]++;
        }
        for(mit=ayy.begin();mit!=ayy.end();mit++)
        {
            if(ayy[mit->first]!=att[mit->first])
            {
                return mit->first;
            }
        }
    }
};