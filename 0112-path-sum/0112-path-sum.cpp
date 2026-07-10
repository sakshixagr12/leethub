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
    bool path_sum(TreeNode*root,int target,int sum){  
        if(root==nullptr)return false;   
        sum+=root->val;        
        if(root->left == nullptr && root->right == nullptr)
        return sum == target;
        return path_sum(root->left,target,sum)||path_sum(root->right,target,sum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        return path_sum(root,targetSum,0);
    }
};