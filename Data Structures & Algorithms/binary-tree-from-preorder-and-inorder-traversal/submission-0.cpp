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

 TreeNode* build(vector<int>&preorder,int preStart,int preEnd,vector<int>&inorder,int inStart,int inEnd,unordered_map<int,int>&seen){
    if(preStart>preEnd || inStart>inEnd) return nullptr;
   TreeNode* root=new TreeNode(preorder[preStart]);
   int inRoot=seen[root->val];
   int numsLeft=inRoot-inStart;

   root->left=build(preorder,preStart+1,preStart+numsLeft,inorder,inStart,inRoot-1,seen);
   root->right=build(preorder,preStart+numsLeft+1,preEnd,inorder,inRoot+1,inEnd,seen);
return root;
 }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int>seen;
        for(int i=0;i<inorder.size();i++){
            seen[inorder[i]]=i;
        }
        return build(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,seen);
    }
};
