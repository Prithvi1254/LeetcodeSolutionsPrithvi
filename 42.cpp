class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int maxright=0;
        int maxleft=0;
        vector<int>left(n);
        vector<int>right(n);
        for(int i=0;i<n;i++){
            left[i]=maxright;
            maxright=max(maxright,height[i]);
        }
        for(int i=n-1;i>=0;i--){
            right[i]=maxleft;
            maxleft=max(maxleft,height[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int a=min(right[i],left[i]);
            ans += max(0, a - height[i]);
        }
        return ans;
    }
};
