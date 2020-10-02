 bool canJump(vector<int>& nums) {
//        O(N) Time and Constant Space
        int n = nums.size();
        int maxreach = 0;
        
        for(int i=0;i<n;++i)
        {
            if(maxreach < i)        return false;
            
            maxreach = max(maxreach,i+nums[i]);
        }
        
        return true;        }
