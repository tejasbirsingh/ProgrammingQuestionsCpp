	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
  // O(N+M) Time and O(1) Space
	  int i=0, j=M-1;
	  while(i<N and j>=0){
	      if(mat[i][j]==X){
	          return 1;
	      }
	      else if(mat[i][j]<X) i++;
	      else j--;
	  }
	  return 0;
	}
