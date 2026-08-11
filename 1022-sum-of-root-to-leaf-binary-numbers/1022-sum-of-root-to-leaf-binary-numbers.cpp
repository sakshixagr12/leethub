// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     int binaryToDecimal(int n) {
//         int decimal = 0;
//         int power = 1;
//         while(n > 0){
//             int bit = n % 10;
//             decimal += bit * power;
//             power *= 2;
//             n /= 10;
//         }
//         return decimal;
// }
//       void sum(TreeNode* root,int &s,int n ) {
//         if(root==nullptr) {
//             return;
//         }
//         n=n*10+root->val;
//         if (root->left==nullptr && root->right==nullptr) {
//             int d = binaryToDecimal(n);
//             s += d;
//             return;
//         }
//         sum(root->left,s,n);
//         sum(root->right,s,n);
//     }
//     int sumRootToLeaf(TreeNode* root) {
//         if(!root) return 0;
//         int ans = 0;
//         sum (root, ans, 0);
//         return ans;
//     }
// };
class Solution {
public:
    void sum(TreeNode* root, int& s, int n) {
        if (root == nullptr)
            return;
        n = n * 2 + root->val;
        if (root->left == nullptr && root->right == nullptr) {
            s += n;
            return;
        }

        sum(root->left, s, n);
        sum(root->right, s, n);
    }

    int sumRootToLeaf(TreeNode* root) {
        int ans = 0;
        sum(root, ans, 0);
        return ans;
    }
};