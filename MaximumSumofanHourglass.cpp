/*
Leetcode Problem 2428. Maximum Sum of an Hourglass
Link - https://leetcode.com/contest/weekly-contest-313/problems/maximum-sum-of-an-hourglass/

Solution - (c++ code)
- This problem can be solved using the naive approach. We will traverse over the matrix from 0 to n-2 for rows 
and 0 to m-2 for columns
- For every i and j we will find the sum using the cell coordinates 
- We will find the max sum by keeping a variable and updating it to the max(ans, sum)
*/



class Solution {
public:
 int hourglassSum(vector<vector<int>> &g, int i, int j){
        
        return (g[i][j] + g[i][j+1] + g[i][j+2] 
                + g[i+1][j+1] + g[i+2][j] 
                + g[i+2][j+1] + g[i+2][j+2]);
        
    }
    
    int maxSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = INT_MIN;
        /* 
         Traverse over the matrix till -2 the last index because the hour glass
         because its shape spread over 3 rows and 3 columns
        */ 
        for (int i=0 ; i<n-2 ; i++){
            for (int j=0 ; j<m-2 ; j++){
                int sum = hourglassSum(grid, i, j);
                ans = max(ans, sum);
            }
        }
        return ans;
    }
};