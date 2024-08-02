class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int total=0;
        for(auto x:nums){
            total+=x;
        }
        int count=0;
        int left=0;
        int ans=INT_MAX;
        int n=nums.size();
        for(int right=0;right<2*n;right++){
            while(right-left+1>total){
                if(nums[left%n]==0) count--;
                left++;
            }
            if(nums[right%n]==0) count++;
            if(right-left+1==total){
                ans=min(ans,count);
            }
        }
        return ans;
    }
};
