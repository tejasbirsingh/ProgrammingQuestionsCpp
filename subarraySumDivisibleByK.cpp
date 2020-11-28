 O(N) Time and O(N) Space
 int subarraysDivByK(vector<int>& A, int K) {
        map<int,int> m;
        int sum=0,res=0,n=A.size();
        m[0]=1;
        for(int i=0;i<n;i++){
            sum += A[i];
            int rem = sum % K;
            if(rem < 0)  rem += K; 
            
            if(m.find(rem)!=m.end()){
                res += m[rem];
            }
            m[rem]++;
        }
        return res;
    }
