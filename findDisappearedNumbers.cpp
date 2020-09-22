#include<bits/stdc++.h>
using namespace std;

  vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            int curr = abs(nums[i]);
            nums[curr-1] = -abs(nums[curr-1]);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i] > 0){
                res.emplace_back(i+1);
            }
        }
        return res;
        
    }

int main(){

	vector<int> arr = {1,4,5,5,3,3};
	vector<int>res ;
	res = findDisappearedNumbers(arr);
	for(auto i:res){
		cout<<i<<" ";
	}
	return 0;
}