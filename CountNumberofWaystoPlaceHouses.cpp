#include <bits/stdc++.h>  

using namespace std;



int countHousePlacements(int n) {
    long long int mod = 1000000007;
    vector<long long int> dp(n+1, 0);
    dp[0] = 1;
    dp[1] = 2;
    for(int i=2; i<n+1; i++){
        dp[i] = (dp[i-1] + dp[i-2]) % mod;
    }
    return (dp[n] * dp[n]) % mod;
     
}



int main() {
    
    // answer should be 4
    cout<<countHousePlacements(1);

    // answer should be 9
    cout<< countHousePlacements(2);

    return 0;
}