/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    //parent_tracker
    void mark_parent(TreeNode* root, unordered_map<TreeNode*,TreeNode*>& parent_track) {
        if (root==nullptr) return ;
        queue<TreeNode*> q;
        q.push (root);
        while(!q.empty()) {
            TreeNode* curr = q.front();
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
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        if (!root) return {};
        unordered_map <TreeNode*, TreeNode*> parent_track;
        mark_parent (root,parent_track);
        queue<TreeNode*> q;
        unordered_map<TreeNode*,bool>visited;
        q.push (target);
        visited [target]=true;
        int distance = 0;
        while (!q.empty()) {
            int s = q.size();
            if (distance++ == k) break;
            for (int i = 0; i<s; i++) {
                TreeNode* curr = q.front();
                q.pop();
                if (curr->left) {
                    if (!visited[curr->left]) {
                        q.push(curr->left);
                        visited [curr->left] = true;
                    }
                }
                if (curr->right) {
                    if (!visited[curr->right]) {
                        q.push( curr->right);
                        visited [curr->right] = true;
                    }
                }
                if(parent_track[curr]) {
                    if (!visited[parent_track[curr]]) {
                        q.push( parent_track[curr]);
                        visited[parent_track[curr]] = true;
                    }
                }
            }
        }
        vector<int> res;
        while(!q.empty()) {
            TreeNode* curr = q.front();
            q.pop();
            res.push_back( curr->val );
        }
        return res;
    }
};