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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i = 0;
        return func(preorder,i,INT_MAX);
    }
    TreeNode* func (vector<int> preorder , int& idx , int bound) {
        if (idx == preorder.size() || preorder[idx] > bound) 
            return NULL;
        
        TreeNode* root = new TreeNode (preorder[idx]);
        idx++;
        root->left = func(preorder, idx, root->val);
        root->right = func(preorder, idx, bound);
        return root;
    }
};