class Solution {
public:
    static bool comp(pair<int,int>a,pair<int,int>b){
        if(a.first==b.first){
            return a.second>=b.second;
        }
        return a.first<b.first;
    }
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<pair<int,int>>store;
        for(auto x:nums ){
            mp[x]++;
        }
        for(auto x:mp){
            store.push_back({x.second,x.first});
        }
        vector<int>ans;
        sort(store.begin(),store.end(),comp);
        for(auto x:store){
            int a=x.first;
            int b=x.second;
            while(a>0){
                ans.push_back(b);
                a--;
            }
        }
        return ans;
    }
};
