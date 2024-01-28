class Solution {
public:
    TreeNode*prev;
    TreeNode*first;
    TreeNode*second;
    TreeNode*last;
    void help(TreeNode*root){
        if(root==NULL) return;
        help(root->left);
        if(root->val<prev->val){
            if(first==NULL){
                first=prev;
                second=root;
            }
            else{
                last=root;
            }
        }
        prev=root;
        help(root->right);
    }
    void recoverTree(TreeNode* root) {
        prev=new TreeNode(INT_MIN);
        first=second=last=NULL;
        help(root);
        if(first and last) swap(first->val,last->val);
        else if(first and second) swap(first->val,second->val);
    }
};
