class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0;
        int product=1;
        int ans=0;
        for(int right=0;right<n;right++){
            product=product*nums[right];
            while(product>=k and left<=right){
                product=product/nums[left];
                left++;
            }
            ans+=right-left+1;
        }
        return ans;
    }
};
