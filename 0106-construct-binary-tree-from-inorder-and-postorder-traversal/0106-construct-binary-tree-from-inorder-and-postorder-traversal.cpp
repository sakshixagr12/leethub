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

    TreeNode* helper (vector<int>& inorder, int is,int ie,vector<int>& postorder,int ps,int pe,unordered_map<int,int>&mpp) {
        if (ps>pe || is>ie)
            return nullptr;
        TreeNode* root = new TreeNode(postorder[pe]);
        int inRoot = mpp[root->val];
        int numsLeft = inRoot-is;
        root->left=helper(inorder,is,inRoot-1,postorder,ps,ps+numsLeft-1,mpp);
        root->right=helper(inorder,inRoot+1,ie,postorder,ps+numsLeft,pe-1,mpp);
        return root;

    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int m = inorder.size();
        int n = postorder.size();
        if (m!=n)
            return nullptr;
        unordered_map<int, int>mpp;
        for(int i=0; i<m; i++)
            mpp[inorder[i]] = i;
        
        TreeNode* root = helper(inorder,0,m-1,postorder,0,n-1,mpp);
        return root;
    }
};