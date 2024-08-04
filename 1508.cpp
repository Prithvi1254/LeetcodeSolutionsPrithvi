class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                ans.push_back(sum);
            }
        }
        int mod=1e9+7;
        sort(ans.begin(),ans.end());
        int a=0;
        for(int i=left-1;i<right;i++){
            a+=ans[i];
            a=a%mod;
        }
        return a%mod;
    }
};
