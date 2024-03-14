class Solution {
public:
    int help(vector<int>&nums,int goal){
        if(goal<0) return 0;
        int l=0;
        int count=0;
        int sum=0;
        int n=nums.size();
        for(int r=0;r<n;r++){
            sum+=nums[r];
            
            while(sum>goal and l<=r){
                sum-=nums[l];
                l++;
            }
            count+=r-l+1;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return help(nums,goal)-help(nums,goal-1);
    }
};
