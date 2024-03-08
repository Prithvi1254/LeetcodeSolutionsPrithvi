class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        int maxi=0;
        for(auto x:nums){
            mp[x]++;
            maxi=max(maxi,mp[x]);
        }
        int ans=0;
        for(auto x:nums){
            if(mp[x]==maxi) ans++;
        }
        return ans;
    }
};
