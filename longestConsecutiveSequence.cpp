#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> s;
        
        int ans =0;
        
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        
        
        for(int i=0;i<nums.size();i++){
            
            if(s.find(nums[i]-1)==s.end()){
                
               int curr =1;
                while(s.find(nums[i] + curr) != s.end()){
                    curr++;
                    
                }
                ans =max(ans ,curr);
            }
        }
            return ans;
    }

int main(){
vector<int> a = {100,4,2,200,3,1,5};

int res = longestConsecutive(a);
cout<<res;


    return 0;
}