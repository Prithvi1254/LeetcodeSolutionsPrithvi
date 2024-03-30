class Solution {
public:
    int help(vector<int>& nums, int k){
        unordered_map<int,int>mp;
        set<int>st;
        int n=nums.size();
        int ans=0;
        int left=0;
        for(int right=0;right<n;right++){
            mp[nums[right]]++;
            st.insert(nums[right]);
           
            while(st.size()>k ){
                mp[nums[left]]--;
                if(mp[nums[left]]==0) st.erase(nums[left]);
                left++;
            }
             ans+=right-left;
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return help(nums,k)-help(nums,k-1);
    }
};
