vector <long long> nextLargerElement(long long arr[], int n){
    
      stack<int> s;
      vector<long long> res(n,-1);
      s.push(0);
      for(int i=1;i<n;i++){
    
          while(!s.empty() and arr[s.top()] < arr[i]) {
              res[s.top()] = arr[i];
              s.pop();
          }
          s.push(i);
      }
      return res;
      
}
