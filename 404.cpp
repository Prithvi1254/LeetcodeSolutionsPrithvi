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
    int help(TreeNode* root,int store){
        if(root==NULL) return 0;
        if(root->left==NULL and root->right==NULL and store==1){
            return root->val;
        }
        int a=0,b=0;
         a=help(root->left,1);
         b=help(root->right,0);
        return a+b;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return help(root,0);
    }
};
