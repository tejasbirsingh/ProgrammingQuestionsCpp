//LeetCode Code:-
 void dfs(vector<vector<char>> &matrix,int x,int y,int r,int c){
      if(x<0 || x>=r || y<0 || y>=c || matrix[x][y]!='1') 
            return;       
      
        matrix[x][y] = '2';
       
        dfs(matrix,x+1,y,r,c);  
        dfs(matrix,x,y+1,r,c); 
        dfs(matrix,x-1,y,r,c);  
        dfs(matrix,x,y-1,r,c);  
    }    
    
    int numIslands(vector<vector<char>>& grid) {
               
        int rows = grid.size();
        int cols = grid[0].size();
        if(rows==0)    
            return 0;     
          
        int islands = 0;
        for(int i=0;i<rows;++i)
        {
            for(int j=0;j<cols;++j)
            {
                if(grid[i][j]=='1')
                {
                    dfs(grid,i,j,rows,cols);
                    islands += 1;
                }
            }
        }
        return islands;
    }
// GeeksForGeeks Practice Code:-
void dfs(vector<int> a[],int i,int j,int n,int m){
    if(i<0 || i>=n || j<0 || j>=m || a[i][j]!=1) return;
    
    a[i][j]=2;
    dfs(a,i+1,j,n,m);
    dfs(a,i-1,j,n,m);
    dfs(a,i,j+1,n,m);
    dfs(a,i,j-1,n,m);
    dfs(a,i+1,j+1,n,m);
    dfs(a,i-1,j-1,n,m);
    dfs(a,i-1,j+1,n,m);
    dfs(a,i+1,j-1,n,m);
}

int findIslands(vector<int> A[], int N, int M) {
    int islands=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++)
            {
                if(A[i][j]==1)
                 {  
                     dfs(A,i,j,N,M);
                     islands++;
                 }
            }
    }
    return islands;
}
