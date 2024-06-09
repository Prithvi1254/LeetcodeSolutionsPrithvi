class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int,int>mp;
        mp[0]=1;
        int sum=0,ans=0;
        for(auto x:nums){
            sum+=x;
            int rem=sum%k;
            if (rem < 0) rem += k;
            if(mp[rem]>0){
                ans+=mp[rem];
            }
            mp[rem]++;
        }
        return ans;
    }
};
