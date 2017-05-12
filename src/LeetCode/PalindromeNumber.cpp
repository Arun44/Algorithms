class Solution 
{
    long long ans=0;long long temp;
    public:
    bool isPalindrome(int x) 
    {
       if(x<0){return false;}
       temp = x;
       while(x!=0)
       {
           ans = x%10 + ans*10;
           x=x/10;
       }
       cout << ans << endl;
       if(ans==temp){return true;}
       else{return false;}
     }
};