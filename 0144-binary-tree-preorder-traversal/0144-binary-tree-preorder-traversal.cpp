
  class Solution {
public:
void Preorder(TreeNode *root,vector<int>&ans){
    if(root==NULL) return;
    ans.push_back(root->val);
    Preorder(root->left,ans);
    Preorder(root->right,ans);
}
    vector<int> preorderTraversal(TreeNode* root) {
       vector<int>ans;
       Preorder(root,ans);
       return ans;
        
    }
};