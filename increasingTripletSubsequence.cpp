  bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        if(n < 3) return false;
        
        int n1 = INT_MAX ,n2 = INT_MAX;
        
        for(auto i:nums){
            if(i <= n1) n1= i;
            else if(i<=n2) n2 = i;
            else return true;
        }
        
        return false;
    }
