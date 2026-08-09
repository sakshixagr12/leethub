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
    int ht(TreeNode* root,int& maxi) {
        if (root==nullptr) return 0;
        int lh = ht(root->left,maxi);
        int rh = ht(root->right,maxi);
        maxi= max(rh+lh,maxi);
        return 1+max(rh,lh);

        // return 
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr) return 0;

        int maxi=0;
        ht(root,maxi);  
        return maxi;      
    }
};