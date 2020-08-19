#include<bits/stdc++.h>
using namespace std;
static bool compare(const vector<int>& a, const vector<int>& b){
        return a[0]<b[0];
    }
    
vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> res;
        
        if (intervals.empty()){
            return res;
        }
        
        sort(intervals.begin(),intervals.end(),compare);
        
        res.push_back(intervals[0]);
        
        for(int i=0 ;i<intervals.size();i++){
            
            if (res.back()[1] < intervals[i][0]){
                res.push_back(intervals[i]);
            }
            else{
                
                res.back()[1] =max(res.back()[1],intervals[i][1]);
            }
        }
        
        return res;
    }

 int main(){
 	vector<vector<int>> arr{{1,3},{2,6},{8,10},{15,18}};
 	vector<vector<int>> res ;
 	res =merge(arr);
 	for(auto i:res){
 		for(auto j:i){
 			cout<<j;

 		}
 		cout<<"\n";
 	}
return 0;
 }