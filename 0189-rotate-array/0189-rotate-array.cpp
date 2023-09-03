class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> num1(n);
        
        for(int i =0; i<n; i++){
            num1[(i+k)%n] = nums[i]; 
        }

        nums = num1;  
    }
};