class Solution {
public:
    int piv(vector<int>& nums, int n){
        int s =0;
        int e =n-1;
        int mid = s +(e-s)/2;
        while(s<e){
            if(nums[mid] >= nums[0] ){
                s =mid+1;
            }
            else{
                e = mid;
            }
            mid = s +(e-s)/2;
        }
        return s;
    }
    
    
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int ans =-1;
        if(nums[0] > nums[n-1]){
            ans =piv(nums, n);
        }
        else{
            ans = 0;
        }
        int ans1=  nums[ans];
        return ans1;
        
    }
};