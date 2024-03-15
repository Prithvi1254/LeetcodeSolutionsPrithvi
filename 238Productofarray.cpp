class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ahead(n);
        vector<int>prev(n);
        vector<int>ans(n);
        ahead[n-1]=1;
        prev[0]=1;
        for(int i=1;i<n;i++){
            prev[i]=prev[i-1]*nums[i-1];
            ahead[n-i-1]=ahead[n-i]*nums[n-i];
            
        }
        for(int i=0;i<n;i++){
            ans[i]=prev[i]*ahead[i];
        }
        return ans;

    }
};
