 int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // O(N) Time and O(1) Space
        int n = gas.size();
        int valid=0;
        for(int i=0;i<n;i++){
            valid += gas[i]-cost[i];
        }
        if(valid <0) return -1;
        
       
        int currBalance = 0;
        int startingIndex = 0;
        
        for(int i = 0; i < n; ++i){
           
            currBalance += gas[i] - cost[i];
            if(currBalance < 0){
                currBalance = 0;
                startingIndex = i+1;
            }
        }
        return startingIndex;
    }