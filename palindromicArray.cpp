#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    
    int i=0,j=n-1;
    int res=0;
    while(i<=j){
        if (a[i] == a[j]) 
        {   i++; 
            j--; 
        } 
        else if (a[i] > a[j]) 
        {   j--; 
            a[j] += a[j+1] ; 
            res++; 
        } 
        else
        { 
            i++; 
            a[i] += a[i-1]; 
            res++; 
        } 
        
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
