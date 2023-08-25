class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i=0;
        int n = arr.size();
        int j = i+1, k =j+1;
        int curr_index = 0,ans=0;
        while(k!=n){
            if(arr[i]>arr[j] && arr[i]>arr[k]){
                curr_index = i;
            }
            else if(arr[j]>arr[i] && arr[j]>arr[k]){
                curr_index = j;
            }
            else{
                curr_index = k;
            }

            if(arr[curr_index]>arr[ans]){
                ans = curr_index;
            }
            
            i++, j++, k++;


        }
        
        return ans;
    }
};