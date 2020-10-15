vector<int> topKFrequent(vector<int>& nums, int k) {
        
        if(nums.size() < 2)    return {nums[0]};
        
        vector<int> res;             
        priority_queue<pair<int, int>,vector<pair<int,int>>, greater<pair<int,int>>> minHeap;   
        unordered_map<int, int> mp;       
       
        for(int i=0; i<nums.size(); i++)   mp[nums[i]]++;         
                          
        for(auto it:mp)
        {
            minHeap.push({it.second, it.first}); 
            if(minHeap.size()>k) minHeap.pop();
        }
        
        while(minHeap.size()>0)
        {
            res.push_back(minHeap.top().second); 
            minHeap.pop();
        }
        
        return res;
    }
