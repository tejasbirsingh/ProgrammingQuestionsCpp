/*
    Problem Link - https://leetcode.com/problems/is-graph-bipartite/description/

    Time complexity - O(n + e), n is number of nodes and e is number of edges
    Space complexity - O(n + n), n for queue and another n for colour array
*/

class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {

        vector<int> colour(graph.size(), -1);
        queue<int> queue;

        for(int i = 0 ; i < graph.size(); i++) {
            queue.push(i);
            if(colour[i] != -1) continue;
            colour[i] = 0;
            while(!queue.empty()) {
                int i = queue.front(); queue.pop();
                for(auto neighbor: graph[i]) {
                    if(colour[neighbor] == colour[i]) return false;
                    else if(colour[neighbor] >= 0) continue;
                    colour[neighbor] = !colour[i];
                    queue.push(neighbor);
                }
            }
        }
        return true;
    }
};