class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numToIndex;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            // Check if the complement is in the hashmap
            if (numToIndex.find(complement) != numToIndex.end()) {
                ans.push_back(numToIndex[complement]);
                ans.push_back(i);
                return ans; // We found a solution, so we can return immediately
            }
            
            // Store the current number and its index in the hashmap
            numToIndex[nums[i]] = i;
        }

        return ans; // No solution found
    }
};





