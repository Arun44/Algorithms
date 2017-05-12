class Solution 
{
  long long ans = 0 ;
  public:
  int reverse(int x) 
  {
     while(x!=0)
        {
            ans = ans * 10 + x % 10;
            x = x / 10;
        }
     if ((ans>=INT_MIN)&&(ans<=INT_MAX))
       {
          return ans;
       }
    else
       {
           return 0;
       }

    }

};