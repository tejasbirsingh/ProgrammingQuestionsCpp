#include<bits/stdc++.h>
using namespace std;

// O(N) Time and O(1) Space
int findDuplicate(vector<int>& nums) {        
        int slow = nums[0],fast = nums[0];
//         In this loop we will find the collision point
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
                    }
        while(slow != fast);
        
//         fast will be intizialized to the starting point 
        fast = nums[0];
        
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow ;
    }

int main(){

	vector<int> arr = {1,3,5,6,7,2,4,2};
	int res = findDuplicate(arr);
	cout<<res;
}