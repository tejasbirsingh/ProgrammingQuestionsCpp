 O(N*M) Time Complexity and Constant Space
 void dfs(vector<vector<char>>& board, int i,int j, int n, int m){
        if(i<0 || i>=n |j<0 || j>=m) return;        
        if(board[i][j] == 'O'){
            board[i][j] = 'M';
            dfs(board, i+1, j, n, m);
            dfs(board, i-1, j, n, m);
            dfs(board, i, j+1, n ,m);
            dfs(board, i, j-1, n ,m);
        }
    }
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        if(n==0) return;        
        int m = board[0].size();
        
        for(int r=0;r<n;r++){
            for(int c=0;c<m;c++){
                if(r==0 || c==0 || r==n-1 || c==m-1) {
                    if(board[r][c]=='O') dfs(board,r,c,n,m);
                }
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j] == 'O')     board[i][j] = 'X';
                else if(board[i][j] == 'M')    board[i][j] = 'O';
            }
        }
        
    }
