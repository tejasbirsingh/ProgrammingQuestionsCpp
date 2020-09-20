#include<bits/stdc++.h>
using namespace std;

// O(N^2) Time and O(1) Space
 void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
       
       // Transpose the matrix 
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(i!=j){
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
        }
        
        // Reverse the every row of the matrix
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n/2;j++){
                swap(matrix[i][n-j-1],matrix[i][j]);
            }
        }
    }
int main(){

	vector<vector<int>> matrix ={{1,2,3},
								{4,5,6,},
								{7,8,9,}};

	rotate(matrix);
	for(auto i:matrix){
		for(auto e:i){
			cout<<e<<' ';
		}
		cout<<"\n";
	}
	return 0;


}