 int balancedStringSplit(string s) {
        int r=0,l=0;
        int res=0;
        
        for(char c:s){
            if(c=='R') r++;
            else l++; 
            
            if(r==l) res++;
        }
        return res;
    }
