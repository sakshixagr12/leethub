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
     TreeNode* mark_parent(TreeNode* root, unordered_map<TreeNode*,TreeNode*>& parent_track,int start) {
        //if (root==nullptr) return ;
        queue<TreeNode*> q;
        q.push (root);
        TreeNode* res;
        while(!q.empty()) {
            TreeNode* curr = q.front();
            if (curr->val == start) res = curr;
            q.pop();
            if (curr->left) {
                parent_track [curr->left] = curr;
                q.push (curr->left);
            }
            if (curr->right) {
                parent_track [curr->right] = curr;
                q.push (curr->right);
            }
        }
        return res;
    }
    int amountOfTime(TreeNode* root, int start) {
         if (!root) return 0;
        unordered_map <TreeNode*, TreeNode*> parent_track;
        TreeNode* target = mark_parent (root,parent_track,start);
        queue<TreeNode*> q;
        unordered_map<TreeNode*,bool>visited;
        q.push (target);
        visited [target]=true;
        int distance = 0;
         while (!q.empty()) {
            int s = q.size();
            int fl=0;
            for (int i = 0; i<s; i++) {
                TreeNode* curr = q.front();
                q.pop();
                if (curr->left) {
                    if (!visited[curr->left]) {
                        fl=1;
                        q.push(curr->left);
                        visited [curr->left] = true;
                    }
                }
                if (curr->right) {
                    if (!visited[curr->right]) {
                        fl =1;
                        q.push( curr->right);
                        visited [curr->right] = true;
                    }
                }
                if(parent_track[curr]) {
                    if (!visited[parent_track[curr]]) {
                        fl = 1;
                        q.push( parent_track[curr]);
                        visited[parent_track[curr]] = true;
                    }
                }
            }
            if(fl)
            distance++;
        }
        return distance;
    }
};