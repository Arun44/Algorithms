class Solution 
{
    int f,s,sum=0;bool k=true;int p;
    public:
    int com(int tem)
    {
        sum = 0 ;
        while(tem!=0)
        {
            p = tem%10;
            sum = sum + (p*p);
            tem = tem / 10;
        }
        return sum;
    }
    bool isHappy(int n) 
    {
        f=n;s=n;
        while(k==true)
        {
            s = com(s);f = com(f);f = com(f);
            if(s==f)
            {
                k=false;
            }
        }
        if(s==1)
        {
            return true;
        }
        else{return false;}
    }
};