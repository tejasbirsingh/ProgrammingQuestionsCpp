#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
       int n, max = INT_MIN;
       cin>>n;
       vector<int> a(n);
       vector<int> res;
       for(int i=0;i<n;i++){
           cin>>a[i];
       }
       for(int i=n-1;i>=0;i--){
           if(a[i] >= max) {
               max = a[i];
               res.emplace_back(max);
           }
       }
      
      for(auto i=res.rbegin();i!=res.rend();i++){
          cout<<*i<<" ";
      }
      cout<<"\n";
       
    }
	return 0;
}
