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
    void inorder(TreeNode* root,vector<int>&  st){
        if (!root) return;
        inorder (root->left, st);
        st.push_back (root->val);
        inorder (root->right, st);
    }
   
    bool findTarget(TreeNode* root, int k) {
        vector<int> nums;
        inorder(root,nums);
        int n = nums.size();
        int i = 0, j = n-1;
        while (i<j) {
            if (nums[i] + nums[j] == k) return true;
            else if (nums[i] + nums[j] > k) j--;
            else i++;
        }
        return false;
        
    }
};