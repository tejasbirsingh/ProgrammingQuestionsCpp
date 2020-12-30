  // O(N) Time and O(N) Space
  bool canConstruct(string s, int k) {
        if(s.size()<k) return false;
        int count[26]={0};
        
        for(char c:s)  count[c-'a']++;      
        int outOccuringChar=0;
        
        for(int i=0;i<26;i++)   outOccuringChar+= count[i]%2;
        
        return k >= outOccuringChar;  
    }
