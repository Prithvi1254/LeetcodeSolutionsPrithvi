class Solution {
public:
    void rec(TreeNode* root) {
        if (!root)
            return;
        
        m[root->val]++;
        
       
        if (!root->left && !root->right) {
            int odd = 0;
            for (auto a : m)
                if (a.second % 2 == 1)
                    odd++;

            if (odd <= 1)
                res++;
        }
        
        rec(root->left);
        rec(root->right);
        m[root->val]--;
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        rec(root);
        return res;
    }
    
private:
    int res = 0;
    unordered_map<int, int> m;
};
