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
    void sum(TreeNode* root,int &s,int n ) {
        if(root==nullptr) {
            return;
        }
        n=n*10+root->val;
        if (root->left==nullptr && root->right==nullptr) {
            s += n;
            return;
        }
        sum(root->left,s,n);
        sum(root->right,s,n);
    }
    int sumNumbers(TreeNode* root) {
        if(!root) return 0;
        int ans = 0;
        sum (root, ans, 0);
        return ans;
    }
};