   int compress(vector<char>& chars) {
       int i = 0, n=chars.size();   
       int newLen = 0; 
       while(i<n)
       {
           int j =i;
           while(j<n && chars[j]==chars[i])
           {
               j++;
           }
           chars[newLen++] = chars[i]; 
           
           if(j-i>1) 
           {
               for(char c : to_string(j-i)) {
                   chars[newLen++]  =c;
               }
           }
           i=j; 
           
        }
       return newLen;
   }
