/**
    Problem link - https://leetcode.com/problems/number-of-provinces/description/
*/

class Solution {
public:
    void dfs(vector<vector<int>>& isConnected , int city , vector<int>& visited){
        visited[city] = 1;
        for (int i=0 ; i<isConnected.size() ; i++) {
            if (isConnected[city][i] == 1) {  // check if there exists a path between city and i
                if (visited[i] == 0) {
                    dfs(isConnected , i , visited);
                }
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int count = 0;
        vector<int> visited(isConnected.size());

        for (int i=0 ; i<isConnected.size() ; i++) {
            if (visited[i]==0) {
                dfs(isConnected , i , visited);
                count++; // +1 for each province which has not been visited
            }
        }
        return count;
    }
};