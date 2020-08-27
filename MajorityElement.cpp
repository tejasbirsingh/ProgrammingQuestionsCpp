#include<bits/stdc++.h>
using namespace std;
  int majorityElement(vector<int>& nums) {
        // moore voting algorithm O(N) Time and O(1) Space
        int res=0 , element=0;
        
        for(int i=0;i<nums.size();i++){
            
            if(res==0){
                element = nums[i];
            }
            if(nums[i]==element){
                res++;
            }
            else{
                res--;
            }
            
        }
        return element;
       }

int main(){
	vector<int> arr = {1,1,2,2,2,1,2,2};
	cout<<majorityElement(arr);

	return 0;

}