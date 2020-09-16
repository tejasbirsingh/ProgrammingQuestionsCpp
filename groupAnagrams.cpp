#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    
    vector<vector<string>> res;

    unordered_map<string,vector<string>> keys;
    string temp;
    for(auto i:strs){
        temp = i;
        sort(temp.begin(),temp.end());
        keys[temp].emplace_back(i);
    }
    for(auto i=keys.begin();i!=keys.end();i++){
        res.emplace_back(i->second);
    }
   return res;

}

int main(){


	vector<string> arr = {"eat","tea","tan","ate","nat","bat"};
	vector<vector<string>> res = groupAnagrams(arr);
	for(auto i:res){
		for(auto w:i){
			cout<<w<<' ' ;
		}
		cout<<endl;
	}
	return 0;
}