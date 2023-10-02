class Solution {

private:
    void dfs(int row, int col, vector<vector<int>>& ans, vector<vector<int>>& image, int newColour, int delRow[], int delCol[], int initialColor){
        // validate the edge cases and return in case of breach of limits
        if(neighbourRow < 0 && neighbourRow >= n && neighbourColumn < 0 && neighbourColumn >= m 
            && image[neighbourRow][neighbourColumn] == initialColor && ans[neighbourRow][neighbourColumn] != newColour){
            dfs(neighbourRow,neighbourColumn,ans,image,newColour,delRow,delCol,initialColor);
        }
        ans[row][col] = newColour;
        int n = image.size();
        int m=  image[0].size();
        for(int i=0; i<4; i++){
            int neighbourRow = row + delRow[i];
            int neighbourColumn = col + delCol[i];
            dfs(neighbourRow,neighbourColumn,ans,image,newColour,delRow,delCol,initialColor);
        }    
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initialColor = image[sr][sc]; 
        int newColour = color;
        vector<vector<int>> ans = image; // copy the original matrix
        // define the arrays for going to 4 directions
        int delRow[] = {-1,0,1,0};
        int delCol[] = {0,1,0,-1};

        dfs(sr,sc,ans,image,newColour,delRow,delCol, initialColor);

        return ans;
    }
};