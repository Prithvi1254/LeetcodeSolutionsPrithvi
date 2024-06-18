class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int,int>>nums;
        int n=difficulty.size();
        for(int i=0;i<n;i++){
            nums.push_back({difficulty[i],profit[i]});
        }
        sort(nums.begin(),nums.end());
        sort(worker.begin(),worker.end());
        int ans=0;
        for(auto x:worker){
            int maxi=0;
            int i=0;
            while(i<n and nums[i].first<=x){
                int add=nums[i].second;
                maxi=max(maxi,add);
                i++;
            }
            ans+=maxi;
        }
        return ans;
    }
};
