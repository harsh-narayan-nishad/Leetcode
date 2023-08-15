class Solution {
public:
    bool isPalindrome(int x) {
        long temp,sum=0,n;
        temp=x;
        while(temp>0)
        {
            n=temp%10;
            sum=sum*10 +n;
            temp=temp/10;
        }

        if(sum==x)
        {
            return true;
        }

        else{
            return false;
        }
        return 0; 
    }
};