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

class Codec {
public:

    // Encodes a tree to a single string.

 void serial(TreeNode* root,string &str){
    if(root==nullptr){
        str+="N,";
        return;
    }
    str+=to_string(root->val)+",";
    serial(root->left,str);
    serial(root->right,str);
 }


    string serialize(TreeNode* root) {
        string str="";
        serial(root,str);
        return str;
    }

    // Decodes your encoded data to tree.
TreeNode* de(stringstream& ss){
   string token;
   if(!getline(ss,token,',')) return nullptr;
   if(token=="N"){
    return nullptr;
   }
   TreeNode* node=new TreeNode(stoi(token));
   node->left=de(ss);
   node->right=de(ss);
   return node;
}

    TreeNode* deserialize(string data) {
        stringstream ss(data);
    return de(ss);
        
    }
};
