
#include <bits/stdc++.h>
using namespace std;

bool findPairSum(int a[], int n,int target){

	int l,h;
	sort(a,a+n);
	l=0;h=n-1;
	while(l <= h){
		int s =a[l] + a[h];
		if ( s== target){
			return 1;
		}
		else if (s< target){
			l++;
		}
		else{
			h--;
		}}
	return 0;
}

int main(){
	int a[] = {10,4,1,9,6,0};
	int n = sizeof(a)/sizeof(a[0]);
	int target = 15;
	if(findPairSum(a,n,target)){
		cout<<"Pair exists";
	}
	else{
		cout<<"Pair doesn't exist";
	}
	return 0;
}