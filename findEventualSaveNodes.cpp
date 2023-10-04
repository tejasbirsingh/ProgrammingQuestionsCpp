/**
 Problem link - https://leetcode.com/problems/find-eventual-safe-states/description/
*/
class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<bool> visited(n, false);
        vector<int> unsafe(n, 0);

        for (int i = 0; i < n; i++) {
            if (unsafe[i] == 0) {
                visited[i] = true;
                dfs(i, visited, graph, unsafe);
                visited[i] = false;
            }
        }

        vector<int> result;
        for (int i = 0; i < unsafe.size(); i++) {
            if (unsafe[i] == 1) {
                result.push_back(i);
            }
        }
        return result;
    }

    bool dfs(int node, vector<bool>& visited, vector<vector<int>>& graph, vector<int>& unsafe) {
        bool isSafe = true;
        for (int neighbor : graph[node]) {
            if (visited[neighbor] || unsafe[neighbor] == 2) {
                isSafe = false;
                break;
            }
            if (unsafe[neighbor] == 1) {
                continue;
            }
            visited[neighbor] = true;
            if (!dfs(neighbor, visited, graph, unsafe)) {
                isSafe = false;
            }
            visited[neighbor] = false;
        }
        unsafe[node] = isSafe ? 1 : 2;
        return isSafe;
    }
};