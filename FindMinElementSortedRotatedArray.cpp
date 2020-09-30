 int findMin(vector<int>& nums) {
       
        if(nums.size()==1) return nums[0];        
        
     
        int left = 0,right =nums.size()-1;
       
         if(nums[left] < nums[right]) return nums[0];
       
        
        while(left <= right){
            int mid = left + (right-left)/2;
            
            if(nums[mid] > nums[mid+1]){
                return nums[mid+1];
            }
            if(nums[mid-1] > nums[mid]){
                return nums[mid];
            }
            
            if(nums[left] < nums[mid] && nums[right] < nums[mid]){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return -1;
    }
