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
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return func(root->left, root->right);
    }
    bool func(TreeNode* l, TreeNode* r) {
        if(l==nullptr || r==nullptr) return l==r;
        if(l->val!=r->val) return false;
        return func(l->left, r->right) && func(l->right, r->left);
    }
};