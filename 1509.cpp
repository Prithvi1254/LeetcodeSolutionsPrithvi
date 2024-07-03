class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n<5) return 0;
        int a=INT_MAX;
        for(int i=0;i<4;i++){
            int j=i+n-4;
            a=min(a,nums[j]-nums[i]);
        }
        return a;
    }
};
