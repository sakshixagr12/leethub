/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
     void traversePre(TreeNode* root,string &st){
        if(root==nullptr){
            st+="N,";
            return;
        }
        st+=to_string(root->val);
        st+=",";
        traversePre(root->left,st);
        traversePre(root->right,st);
    }

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string st="";
        traversePre(root,st);
        return st;
    }
    
    void buildTree(string &s,TreeNode* &node,int &idx){
        int l=s.size();
       // TreeNode*node=root;
       if(idx>=l) return;
        string temp="";
        for(int i=idx;i<l;i++){
            if(s[i]==',')break;
            temp+=s[i];
            idx++;
        }
        idx+=1;
        
        if(temp=="N") {
            node=nullptr;
            return;
        }
        node= new TreeNode(stoi(temp));
        buildTree(s,node->left,idx);
        buildTree(s,node->right,idx);   
    }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
         if(data[0]=='N') return nullptr;
        TreeNode*root=nullptr;
        int idx = 0;
        buildTree(data,root,idx);
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;