#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
        int res=0 ;
        int l=0,r=height.size()-1;
    
        while(l<r){
            res = max(res,min(height[l],height[r]) * (r-l));
            if(height[l] < height[r]) {
                l++;
            }
            else{
                r--;
            }
            
        }
    return res;
        
   }

int main(){
	vector<int> a={1,8,6,2,5,4,8,3,7};
	int res = maxArea(a);
	cout<<res;
	return 0;
}