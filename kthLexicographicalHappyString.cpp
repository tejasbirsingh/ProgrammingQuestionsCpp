  vector<string> res;
    
    void buildString(int n, int k, string s) {
        
        if(res.size()==k){
            return;
        }
        
        else if(s.size()==n){
            res.push_back(s);
            return;
        }
        
        for(auto charToAdd:{'a','b','c'}){
            if(s.size()==0 or s.back()!=charToAdd){
                buildString(n,k,s+charToAdd);
            }
        }
    }
    
    string getHappyString(int n, int k) {
        
        buildString(n,k,"");
        
        if(res.size()<k)  return "";
        
        return res[k-1];
    }
