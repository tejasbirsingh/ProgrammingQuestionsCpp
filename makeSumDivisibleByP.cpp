     int minSubarray(vector<int>& nums, int p) {
        int n=nums.size();
        int mod=0;
        for(auto i : nums){
             mod=(mod+i)%p;
        }
      
        if(mod==0) return 0;
        map<int,int> mp;
        mp[0]=-1;
        int sum=0;
        int res=n;
         
        for(int i=0;i<n;i++){
            sum=(sum % p +nums[i]);
            int tmp=(sum-mod)%p;   
            // tmp %=p;
            if(tmp<0)
                tmp+=p;            
            if(mp.count(tmp)){
                res=min(res,i-mp[tmp]);
            }            
            mp[sum % p]=i;
        }
        return res==n ? -1 : res;
     }
