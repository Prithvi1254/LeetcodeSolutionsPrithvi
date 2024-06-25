class Solution {
public:
    TreeNode*help(TreeNode*root,int &prev){
        if(root==NULL) return NULL;
        help(root->right,prev);
        root->val=root->val+prev;
        prev=root->val;
        help(root->left,prev);
        return root;
    }
    TreeNode* bstToGst(TreeNode* root) {
        int prev=0;
        return help(root,prev);
    }
};
