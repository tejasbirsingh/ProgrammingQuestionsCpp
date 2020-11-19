#include<bits/stdc++.h>
using namespace std;

// O(NLogn) Time and O(1) Space
void solve(){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int m;
        cin>>m;
        int res = INT_MAX;
        sort(a,a+n);
        for(int i=0;i<(n-m+1);i++){
            int curr = a[i+m-1] - a[i];
            res = min(curr,res);
        }
        cout<<res<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--){
       solve();
    }
}
