class Solution {
public:
    void help(TreeNode*root,vector<int>&ans){
        if(root==NULL) return;
        if(root->left==NULL and root->right==NULL){
            ans.push_back(root->val);
            return;
        }
        help(root->left,ans);
        help(root->right,ans);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>ans1;
        vector<int>ans2;
        if(root1==NULL and root2==NULL) return true;
        if(root1==NULL or root2==NULL) return false;
        help(root1,ans1);
        help(root2,ans2);
        
        return ans1==ans2;
    }
};
