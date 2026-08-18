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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int>mpp;
        int m = preorder.size();
        int n = inorder.size();
        for(int i=0;i<n;i++)
            mpp[inorder[i]]=i;
        TreeNode *root=cons(preorder,0,m-1,inorder,0,n-1,mpp);
        return root;
    }

    TreeNode* cons(vector<int>& preorder,int i1,int m,vector<int>& inorder,int i2,int n,map<int,int>&mpp) {
        if(i1>m || i2>n)  return nullptr;
        TreeNode* root = new TreeNode(preorder[i1]);
        int inRoot = mpp[root->val];
        int numsLeft = inRoot-i2;
        root->left=cons(preorder,i1+1,i1+numsLeft,inorder,i2,inRoot-1,mpp);
        root->right=cons(preorder,i1+numsLeft+1,m,inorder,inRoot+1,n,mpp);
        return root;
    }
};