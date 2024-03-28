class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int arr=0;
        int count=0;
        int n=nums.size();
        int left=0;
        for(int right=0;right<n;right++){
            mp[nums[right]]++;
            while(mp[nums[right]]>k and left<=right){
                mp[nums[left]]--;
                left++;
            }
            arr=right-left+1;
            count=max(count,arr);
        }
        return count;
    }
};
