O(N) Time and O(N) Space
int findMaxLength(vector<int>& nums) {
        int res=0,currSum=0;
        unordered_map<int,int> m;
        
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]==1) currSum+=1;
            else currSum-=1;
            
            if(currSum==0){
                res = max(res,(i+1));
            }
            
            else if(m.find(currSum) != m.end()){
                res = max(res, (i-m[currSum]));
            }
            else{
                m[currSum]=i;
            }
            
        }
        return res;
    }
