int piv(vector<int>& nums, int n){
        int s= 0;
        int e = n-1;
        int mid = s+ (e-s)/2;
        while(s<e){
            if(nums[mid] >= nums[0]){
                s = mid+1;
            }
            else{
                e = mid;
            }
            mid = s+ (e-s)/2;
        }
        return s;
    }

    int bs(vector<int>& num, int st, int end, int target){
        int s= st;
        int e = end;
        int mid = s+ (e-s)/2;
        while(s<=e){
            if(num[mid] == target){
                return mid;
            }
            else if(num[mid] < target){
                s = mid+1;
            }
            else{
                e = mid -1;
            }
            mid = s+ (e-s)/2;
        }
        return -1;
    
    }
    
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        int pivot = piv(nums, n);
        cout << pivot;
        int index =-1;
        if(target >= nums[pivot] && target <= nums[n - 1]){
            index = bs(nums, pivot, n-1, target);
        }
        else{
            index = bs(nums, 0, pivot-1, target );

        }
        return index;
