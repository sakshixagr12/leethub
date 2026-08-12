/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (!root) return 0;
        int ans = 0;
        queue< pair <TreeNode*,long long >> q;
        q.push( { root, 0}); //zeroth based indexing
        while (!q.empty()) {
            int n = q.size();
            int mini = q.front().second ; // to modify the indexing 
            int first, last;
            for (int i=0; i<n; i++) {
                TreeNode* node = q.front().first;
                int curr_idx = q.front().second - mini;
                q.pop();
                if (i==0) first=curr_idx;
                if (i==n-1) last= curr_idx;
                if( node->left) 
                    q.push({node->left,(long long )2*curr_idx+1});
                if ( node->right ) 
                    q.push({node->right,(long long )2*curr_idx+2});
               
            }
             ans = max(ans, last-first+1);
        }
        return ans;
    }
};