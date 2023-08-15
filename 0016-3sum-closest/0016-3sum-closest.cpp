class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int diff =INT_MAX;
        int ans = 0;

        for(int i=0; i<nums.size()-1; i++){
            int start = i+1;
            int end = nums.size()-1;
            while(start<end){
                int sum = nums[i]+nums[start]+nums[end];
                if(abs(sum - target)<diff){
                    diff = abs(sum-target);
                    ans = sum;
                }
                else if(sum == target){
                    return sum;
                }

                if(sum<target){
                    start++;
                }
                else{
                    end--;
                }
            }
        }

        return ans;
        
        
    }
};