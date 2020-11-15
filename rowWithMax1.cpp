	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	   // int res=-1;
	   // for(int col=0;col<m;col++){
	   //     for(int row=0;row<n;row++){
	   //         if(arr[row][col] == 1){
	   //             return row;
	   //         }
	   //     }
	   // }
	   // return res;
	    
	   //Approach 2
    int j = m-1;
    while(j>=0 && arr[0][j]==1){
        j--;
    }
    int row = 0;
    
    for(int i=1;i<n;i++){
        
        while(j>=0 && arr[i][j]==1){
            j--;
            row = i;
        }
    }
    return j==m-1 ? -1 : row;
	}
