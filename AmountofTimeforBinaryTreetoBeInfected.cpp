/**
Leetcode problem link - Amount of Time for Binary Tree to Be Infected

Problem description - You are given the root of a binary tree with unique values, and an integer start. At minute 0, an infection starts from the node with value start.

Each minute, a node becomes infected if:

The node is currently uninfected.
The node is adjacent to an infected node.
Return the number of minutes needed for the entire tree to be infected.


Solution - 

1. Convert the tree to a graph data structure using map
2. Do a BFS traversal on the graph by infecting each level
3. This problem is similar to rotten oranges problem in a grid where you will be 
maintaining a time variable for each node and return the maximum time out of all because 
that will be the minimum time for all nodes to get infected

**/

#define pb push_back

class Solution {
public:
    unordered_map<int, vector<int>> graph; 
    
    void dfs(TreeNode* root, int par){
        if(!root){
            return;
        }
        if(par != -1){
            // add the child as parent's neighbour and vice versa
            graph[par].pb(root ->val);  
            graph[root->val].pb(par); 
        } 
        int curr = root->val;
        dfs(root->left, curr); 
        dfs(root->right, curr);

    }
    
    int amountOfTime(TreeNode* root, int start) {
        // dfs traversal to convert tree to a graph
        dfs(root, -1);
        queue<pair<int, int>> q; 
        q.push({start, 0}); 
        int ans= 0;
        
        unordered_set<int> vis; 
        vis.insert(start);
        
        while(!q.empty()){
            auto a = q.front();
            q.pop();
            // Find the max at every step as it will be the minimum time for all the nodes to be infected
            ans = max(ans, a.second);
            for(auto next : graph[a.first]){ 
                // if the nodes is not visited then add it to the queue
                if(vis.count(next) == 0){ 
                    q.push({next, a.second+1}); 
                    vis.insert(next); 
                }
            }
        }
        return ans;
    }
};