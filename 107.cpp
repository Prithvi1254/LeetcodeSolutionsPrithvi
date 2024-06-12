class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>temp;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode*a=q.front();
                q.pop();
                temp.push_back(a->val);
                if(a->left) q.push(a->left);
                if(a->right) q.push(a->right);
            }
            ans.push_back(temp);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
