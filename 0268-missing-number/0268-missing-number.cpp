class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size()-1;
        sort(nums.begin(), nums.end());

        for(int i=0; i<=n;i++){
            if(i!=nums[i]){
                return i;
            }
        }

        return n+1;
        
    }
};