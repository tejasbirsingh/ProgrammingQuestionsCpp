 int findKthLargest(vector<int>& nums, int k) {
//         Max heap Solution Time complexity :- O(N + KLogN)
//         priority_queue<int> maxHeap;
        
//         for(auto &i : nums){
//             maxHeap.push(i);
//         }
//         for(int i =1;i<k;i++){
//             maxHeap.pop();
//         }
//         return maxHeap.top();
        
        
//         Min Heap Solution Time complexity :- O(K Log N)
        priority_queue<int,vector<int>,greater<int>> minHeap;
        for(int num:nums)
        {            
            minHeap.push(num);
           
            if(minHeap.size()>k)
                minHeap.pop();
        }
        return minHeap.top();
    }
