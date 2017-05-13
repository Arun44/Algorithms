class Solution 
{ 
    int sum =11; bool y=true;int temp=0;
    public:
    int addDigits(int num) 
    {
        while ((sum)>=10)
        {
            if(y!=true)
            {
                num=sum;
            }
            sum = 0;
            while (num!=0)
            {
                temp = num % 10;sum = sum + temp ; 
                num = num / 10;
            }
            y=false;
        }
        return sum;
    }
};