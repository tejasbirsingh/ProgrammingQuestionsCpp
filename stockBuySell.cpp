#include<bits/stdc++.h>
using namespace std;
// O(N) Time and O(1) Space
 int maxProfit(vector<int>& prices) {
         // for increasing input output speed
        // ios_base::sync_with_stdio(false);
        // cin.tie(NULL);
        
        int minprice = INT_MAX;
        int maxprofit = 0;
        for (int i = 0; i < prices.size(); i++) {            
            if (prices[i] < minprice)       
                minprice = prices[i];
            
            else if (prices[i] - minprice > maxprofit)
                maxprofit = prices[i] - minprice;   
        }
        
        return maxprofit;
    }

int main(){
	vector<int> prices = {7,1,5,3,6,4};
	cout<<maxProfit(prices);

	return 0;

}