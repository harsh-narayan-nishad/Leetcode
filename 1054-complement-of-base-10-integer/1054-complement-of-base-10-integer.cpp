class Solution {
public:
    int bitwiseComplement(int n) {
        int temp = n;
        int temp1=0;

        //edge case
        if(n==0){
            return 1;
        }

        while(temp!=0){
            temp1=(temp1<<1) | 1;
            temp = temp>>1;
        }
        
        int ans= temp1 & ~n;
        return ans;
    }
};