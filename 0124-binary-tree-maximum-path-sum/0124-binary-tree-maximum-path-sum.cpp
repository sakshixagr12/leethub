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
    int maxPath(TreeNode* root, int& maxi) {
        if( root==nullptr ) return 0;
        int leftS = max(0,maxPath(root->left, maxi));
        int rightS = max(0,maxPath(root->right, maxi));
        maxi = max(maxi,( root->val +leftS+rightS));
        return root->val + max( leftS, rightS);
    }
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        maxPath( root, ans);
        return ans;
    }
};