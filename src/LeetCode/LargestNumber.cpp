int comp(string x,string y)
{
      string xy = x.append(y);string yx = y.append(x);
      return xy.compare(yx) > 0 ? 1: 0;
}
class Solution 
{ 
    vector<string> att;string p;
    public:
    string largestNumber(vector<int>& nums) 
    {
        for(int i=0;i<nums.size();i++)
        {
            att.push_back(to_string(nums.at(i)));
        }
        std::sort(att.begin(),att.end(),comp);
        for(int i=0;i<att.size();i++)
        {
            p = p + att.at(i);
        }
        if(p.at(0)=='0'){ p='0'; return p;}
        return p;
    }
};