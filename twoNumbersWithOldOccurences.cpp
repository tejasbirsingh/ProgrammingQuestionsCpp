#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin>>a[i];
    
    int XOR = a[0];
    for(int i = 1; i <n; i++)  XOR ^=a[i];
    
    int rightSetBit = (XOR)&(~(XOR-1));
    
    int x = 0, y = 0;
    
    for(int i = 0; i < n; i++){
        if(rightSetBit&a[i]){
            x^= a[i];
        }
        else{
            y ^=a[i];
        }
    }
    if(x > y)  cout<<x<<" "<<y;
    else   cout<<y<<" "<<x;
}
int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    solve();
	    cout<<"\n";
	}
	return 0;
}
