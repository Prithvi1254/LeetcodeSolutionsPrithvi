class Solution {
public:
    void help(TreeNode* root,int val,int depth){
        if(root==NULL) return;
        if(depth<0 ) return;
        if(depth==1){
            TreeNode*l=root->left;
            TreeNode*r=root->right;
            root->left=new TreeNode(val);
            root->right=new TreeNode(val);
            root->left->left=l;
            root->right->right=r;
        }
        help(root->left,val,depth-1);
        help(root->right,val,depth-1);
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode*a=new TreeNode(val);
            a->left=root;
            return a;
        }
         help(root,val,depth-1);
         return root;
    }
};
