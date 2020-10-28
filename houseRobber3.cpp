// O(N) Time and O(N) Space
class Solution {
    unordered_map<TreeNode*, int> dp;
public:
    int rob(TreeNode* root) {
        if(!root) return 0;
        if(dp[root]) return dp[root];
        
        int a1 = rob(root->left) + rob(root->right);  // amount  robber can make excluding parent of node
        int a2 =root->val;                           // amount robber can make including parent and excluding child
        
//         if we include the parent node then we can add the child of child nodes
//         left and right child if they exist        
        if(root->left){                                     // add the amount of the left and right child of left child 
            a2 += rob(root->left->left) + rob(root->left->right);  
        }
        if(root->right){                                    // add the amount of the left and right child of the right child
            a2 += rob(root->right->left) + rob(root->right->right); 
        }
        return dp[root] =max(a1,a2);            // save the value to the dp Map for memoization
    }
};
