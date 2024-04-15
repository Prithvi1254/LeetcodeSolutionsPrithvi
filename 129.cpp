class Solution {
public:
    int help(TreeNode*root,int value){
        if(root==NULL) return 0;
        if(root->right==NULL and root->left==NULL) return value;
        int a=0,b=0;
        if(root->left){
            a=help(root->left,value*10+root->left->val);
        }
        if(root->right){
            b=help(root->right,value*10+root->right->val);
        }
        return a+b;
    }
    int sumNumbers(TreeNode* root) {
        return help(root,root->val);
    }
};
