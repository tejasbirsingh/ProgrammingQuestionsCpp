  bool checkInclusion(string s1, string s2) {
        int  n= s1.length(); 
        int  m= s2.length();
        if(n>m) return false;
        
        vector<int> c1(26,0);
        vector<int> c2(26,0);
        
        // find the count of characters for first window
        for(int i =0;i<n;i++){
            c1[s1[i] -'a']++;
            c2[s2[i] -'a']++;        
        }
        // use the sliding window approach 
        int  s =0;
        for(int e=n; e < m; e++){
            if(c1 == c2) return true;
            c2[s2[s] -'a']--;
            c2[s2[e] -'a']++;
            s++;            
        }
        return c1==c2 ? true : false;
    }
