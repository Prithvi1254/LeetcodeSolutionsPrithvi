class Solution {
public:
    TreeNode*help2(vector<int>&ans,int left,int right){
        if(left>right) return NULL;
        int mid=left+(right-left)/2;
        TreeNode*root=new TreeNode(ans[mid]);
        root->left=help2(ans,left,mid-1);
        root->right=help2(ans,mid+1,right);
        return root;
    }
    void help(TreeNode*root,vector<int>&ans){
        if(root==NULL) return;
        help(root->left,ans);
        ans.push_back(root->val);
        help(root->right,ans);
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>ans;
        help(root,ans);
        int right=ans.size()-1;
        return help2(ans,0,right);
    }
};
