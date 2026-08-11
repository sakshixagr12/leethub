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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>nodes;
        queue<pair<TreeNode*,pair<int,int>>>q;
        vector<vector<int>> ans;
        if(!root) return ans;
        q.push({root,{0,0}});
        while(!q.empty()) {
            auto p = q.front();
            q.pop();
            TreeNode* node = p.first;
            int x=p.second.first; //column
            int y= p.second.second; //level;
           // nodes[x].insert({y,node->val});
           nodes[x][y].insert(node->val);
            if(node->left) {
                q.push({node->left,{x-1,y+1}});//left -ve
            }
            if(node->right) {
                q.push({node->right,{x+1,y+1}}); //right increment col by +1; and level will be also incremented by +1
            }
        }
        // convert the map into vector to get actual answer
        for(auto p:nodes){
            //p is key-value pair
            vector<int> colEl;//elements of column  
            for (auto q: p.second){
                for(auto val : q.second){
                    colEl.push_back(val);
                }
                
                // q-> p(val) -> {y,val};
                // so q.second is ur val
            }
            ans.push_back(colEl);
        }
        return ans;
    }
};