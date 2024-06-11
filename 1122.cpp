class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>ans;
        map<int,int>mp;
        for(auto x:arr1){
            mp[x]++;
        }
        for(auto x:arr2){
            while(mp[x]>0){
                ans.push_back(x);
                mp[x]--;
            }
        }
        for(auto x:mp){
            while(x.second>0){
                ans.push_back(x.first);
                x.second--;
            }
        }
        return ans;
    }
};
