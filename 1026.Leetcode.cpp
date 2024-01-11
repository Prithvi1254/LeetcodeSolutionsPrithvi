class Solution {
public:
    int maxAncestorDiff(TreeNode* r, int mn = 100000, int mx = 0) {
        if (r == nullptr)
            return mx - mn;
        mx = max(mx, r->val);
        mn = min(mn, r->val);
        return max(maxAncestorDiff(r->left, mn, mx),
                   maxAncestorDiff(r->right, mn, mx));
    }
};
