#include<bits/stdc++.h>
using namespace std;
//O(N) Time and O(1) Space
    void nextPermutation(vector<int>& nums) {
        
    int flag=-1,m=0,k=0;
	
	for(int i=nums.size()-1;i>0;i--){
        
		if(nums[i]>nums[i-1]){
			flag=i-1;
			break;
		}
	}

	if(flag==-1){
		reverse(nums.begin(),nums.end());
		return;
	}

	for(k=nums.size()-1;k>flag;k--)
	{
		if(nums[k]>nums[flag])
			{
			m=k;
			break;
		}
	}
	swap(nums[flag],nums[m]);

	reverse(nums.begin()+flag+1,nums.end());}



int main(){

	vector<int> arr={4 ,1 ,5 ,3 ,2};
	nextPermutation(arr);
	for(auto i:arr){
		cout<<i;
	}
	return 0;
}
