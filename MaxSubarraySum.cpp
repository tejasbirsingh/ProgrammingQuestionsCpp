#include <bits/stdc++.h>
using namespace std;

// O(N) time and O(1) Space
int maxSubArray(vector<int>& nums) {
// INT_MIN is negative infinity
	int maxSoFar = INT_MIN;
	int maxEndingHere = 0;
	    
	for (int i = 0; i < nums.size(); i++) {
	        maxEndingHere += nums[i];	    
	        maxSoFar = max(maxSoFar, maxEndingHere);	    
	        maxEndingHere = max(maxEndingHere, 0);
	    }
	    
	    return maxSoFar;
}

// Naive approach O(N^2) time and O(1) Space
int naive(vector<int>& nums){
	int sum=INT_MIN;
	for(int i = 0; i<nums.size();i++){
		int temp = 0;
		for(int j =i+1;j<nums.size();j++){
			temp += nums[j];
			if(sum < temp){
				sum =temp;
			}
		}
	}
	return sum;
}

int main(){
	vector<int> arr ={-2,1,-3,4,-1,2,1,-5,4};
	cout<<maxSubArray(arr);
	return 0;
}