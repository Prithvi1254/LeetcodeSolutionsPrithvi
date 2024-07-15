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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        map<int,pair<int,int>>mp;
        set<int>st;
        for(auto x:descriptions){
            st.insert(x[0]);
            if(mp.find(x[0])==mp.end()){
                if(x[2]==0){
                    mp[x[0]]={0,x[1]};
                }
                else{
                    mp[x[0]]={x[1],0};
                }
            }
            else{
                if(x[2]==0){
                    mp[x[0]].second=x[1];
                }
                else{
                    mp[x[0]].first=x[1];
                }
            }
        }
        for(auto x:descriptions){
            st.erase(x[1]);
        }
            TreeNode*root=new TreeNode(*st.begin());
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode*curr=q.front();
            q.pop();
            int left=mp[curr->val].first;
            int right=mp[curr->val].second;
            if(left==0){
                curr->left=NULL;
            }
            else{
                curr->left=new TreeNode(left);
            }
            if(right==0){
                curr->right=NULL;
            }
            else{
                curr->right=new TreeNode(right);
            }
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }

        return root;
    }
};
