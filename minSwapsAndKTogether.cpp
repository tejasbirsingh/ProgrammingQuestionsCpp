// O(N) Time and O(1) Space
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>k;
    
    int x=0;
    for(auto i:a) {
        if(i<=k) x++;
    }
    int c=0,res=0;
    for(int i=0;i<x;i++){
        if(a[i] > k) c++;
    }
    res=c;
    int i=0,j=x;
    while(j<n){
        if(a[i] > k) c--;
        if(a[j] > k) c++;
        res=min(res,c);
        i++;j++;
    }
    cout<<res;
    return;
    
}


int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	    cout<<"\n";
	}
	return 0;
}
