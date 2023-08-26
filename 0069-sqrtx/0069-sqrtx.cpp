class Solution {
public:
    int binarySearch(int n){
        int s=0;
        int e=n;
        int ans =-1;
        long long int mid = e+(s-e)/2;
        //Jab mid*mid  ki value range se bahar chali jae to (mid*mid) ki value store karne ke lie
        
        while(s<=e){
            long long int  square = mid*mid;
            if(square==n){
                return mid;
            }

            if(square>n){
                e = mid-1;
            }

            else if(square<n){
                ans = mid;
                s=mid+1;
            }

            mid = e +(s-e)/2;

        }

        return ans;
    }

    int mySqrt(int x) {

        return binarySearch(x);

    }
};