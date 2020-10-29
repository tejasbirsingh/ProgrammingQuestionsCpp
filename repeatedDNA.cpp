 vector<string> findRepeatedDnaSequences(string s) {
        
//      Hashmap based solution O(N) Time and O(N) Space
        vector<string> res;
        if(s.size()<=10) return res;
        unordered_map<string,int> m;        
        for(int i=0;i<s.size()-9;i++){
            m[s.substr(i,10)]++;
        }        
        for(auto i:m){
            if(i.second > 1){
                res.emplace_back(i.first);
            }            
        }
        return res;      
        
    }
