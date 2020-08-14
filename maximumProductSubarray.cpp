#include<bits/stdc++.h>
using namespace std;

 // O(N) Time and O(N) Space DP sol:-
int maxProductDP(vector< int>& nums) {
      
        vector<int> max_dp(nums.size());
        vector<int> min_dp(nums.size());
      
        max_dp[0]=nums[0];
        min_dp[0] = nums[0];
        
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                max_dp[i]=max(nums[i],nums[i] * min_dp[i-1]);
                min_dp[i]=min(nums[i],nums[i]*  max_dp[i-1]);
            }
            else{
                max_dp[i]= max(nums[i],nums[i] * max_dp[i-1]);
                min_dp[i]= min(nums[i],nums[i] * min_dp[i-1]);
            }
        }
       
        return *max_element(max_dp.begin(),max_dp.end());
        }

 // O(N) Time and O(1) Space 
 int maxProductConstantSpace(vector< int>& nums) {
        int max_curr=nums[0] , min_curr=nums[0] , res = nums[0];
        
        if(nums.size()==0){
           return -1;
        }
        
        
        for(int i=1;i<nums.size();i++){
            
            int c1 = max_curr * nums[i];
            int c2 = min_curr * nums[i];
            max_curr = max(nums[i],max(c2,c1));
            min_curr = min(nums[i],min(c1,c2));
            res =max(max_curr,res);
            
        }
        return res;
    }

int main(){
	vector<int> arr = {2,3,-2,4};
	cout<<maxProductDP(arr);
	cout<<"\n"<<maxProductConstantSpace(arr);
	return 0;
  }