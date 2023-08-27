class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0, n = height.size();
        int end = n-1;
        int area =0;
        while(start<end){
            if(height[start]<=height[end]){
                area = max(area, height[start]*(end-start));
                start++;
            }
            else{
                area = max(area, height[end]*(end-start));
                end--;
            }
        }

        return area;
        
    }
};