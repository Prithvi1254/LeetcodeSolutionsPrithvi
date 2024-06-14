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
    int widthOfBinaryTree(TreeNode* root) {
        unsigned long long maxi=0;
        if(root==NULL) return maxi;
        queue<pair<TreeNode*,unsigned long long>>q;
        q.push({root,0});
        while(!q.empty()){
            int n=q.size();
            long long prev=q.front().second;
            for(int i=0;i<n;i++){
                TreeNode*a=q.front().first;
                unsigned long long level=q.front().second;
                q.pop();
                if(prev==-1){
                    prev=level;
                }
                unsigned long long right=level;
                if(i==n-1){
                    maxi=max(maxi,right-prev+1);
                }
                if(a->left) q.push({a->left,2*level});
                if(a->right) q.push({a->right,(2*level)+1});
            }
        }
        return maxi;
    }
};
