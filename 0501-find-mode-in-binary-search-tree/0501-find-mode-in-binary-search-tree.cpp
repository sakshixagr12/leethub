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
    void inorder(TreeNode* root,  vector<int>& in){
        if (!root)
            return;
        inorder(root->left, in);
        in.push_back(root->val);
        inorder(root->right, in);
    }
    vector<int> findMode(TreeNode* root) {
        if (!root)
            return {0};
        vector<int> in;
        inorder (root,in);
        unordered_map<int,int>mpp;
        for (int it : in)
            mpp[it]++;
        vector<int> res;
        int max_freq = 0;
        for (auto it: mpp) {
            max_freq = max(max_freq, it.second);
        }
        for (auto it : mpp) {
            if (it.second == max_freq)
                res.push_back(it.first);
        }
        return res;
    }
};