class Solution {
public:
    void check(TreeNode*root,int low,int high,int &ans){
        if(root==NULL) return;
        if(root->val<=high and root->val>=low){
            ans+=root->val;
        }
        check(root->left,low,high,ans);
        check(root->right,low,high,ans);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans=0;
        if(root==NULL) return 0;
        check(root,low,high,ans);
        return ans;
    }
};
