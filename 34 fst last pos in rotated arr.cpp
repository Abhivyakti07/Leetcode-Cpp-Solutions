class Solution {
public:
    int first(vector<int>& nums,int n ,int key){
        int s =0;
        int e =n-1;
        int mid =s+(e-s)/2;
        int ans =-1;
        while(s<=e){
            if(nums[mid] == key){
                e = mid-1;
                ans =mid;
            }
            else if(nums[mid] < key){
                s =mid+1;
            }
            else{
                e =mid-1;
            }
            mid =s+(e-s)/2;
        }
        return ans;
    }

    int lastt(vector<int>& nums,int n ,int key){
        int s =0;
        int e =n-1;
        int mid =s+(e-s)/2;
        int ans =-1;
        while(s<=e){
            if(nums[mid] == key){
                s = mid+1;
                ans =mid;
            }
            else if(nums[mid] < key){
                s =mid+1;
            }
            else{
                e =mid-1;
            }
            mid =s+(e-s)/2;
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> g1;
        int n= nums.size();
        int ans = first(nums, n ,target);
        g1.push_back(ans);
        int ans1 = lastt(nums, n ,target);
        g1.push_back(ans1);

        return g1;
        
    }
};