#include<bits/stdc++.h>
using namespace std;

vector<int> partitionLabels(string S) {
    
    vector<int> lastIndex(26,-1);
    for(int i=0;i<S.size();i++){
        lastIndex[S[i] -'a'] = i;
    }
    vector<int> res;
    int s=0,e=0;
    for(int i=0;i<S.size();i++){
        e = max(e,lastIndex[S[i]-'a']);
        if(i == e){
            res.emplace_back((i-s+1));
            s = i+1;
        }
        
    }
    return res;
}

int main(){

	string s="ababcbacadefegdehijhklij";
	vector<int>res ;
	res = partitionLabels(s);
	for(auto i:res){
		cout<<i<<" ";
	}
	return 0;
}