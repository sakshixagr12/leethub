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
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root||(!root->left&&!root->right)) return 0;
        int sum = 0;
        func(root,sum);
        return sum;
    }
    void func(TreeNode* root,int& sum) {
        if(root==nullptr) return;
        func(root->left,sum);
        func(root->right,sum);
        if(root->left&& (root->left->left==nullptr&&root->left->right==nullptr))
            sum+=root->left->val;
    }
};