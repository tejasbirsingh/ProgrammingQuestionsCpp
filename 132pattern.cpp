    //O(N) Time and O(N) Space
    bool find132pattern(vector<int>& nums) {
        int n=nums.size();
        vector<int> leftMin(n);
        leftMin[0] = nums[0];
        for(int i=1;i<n;i++){
            leftMin[i] = min(leftMin[i-1],nums[i]);
        }
        
        stack<int> s;
        for(int i=n-1;i>=0;i--){
            if(nums[i] > leftMin[i]){
                while(!s.empty() && s.top() <= leftMin[i]) s.pop();
                if(!s.empty() && s.top() < nums[i]){
                    return true;
                }
                s.push(nums[i]);
            }
            
        }
        return false;
    }
