class Solution {
public:
    static bool comp(pair<int,string>a,pair<int,string>b){
        return a.first>=b.first;
    }
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>>store;
        int n=names.size();
        for(int i=0;i<n;i++){
            store.push_back({heights[i],names[i]});
        }
        sort(store.begin(),store.end(),comp);
        vector<string>ans;
        for(auto x:store){
            ans.push_back(x.second);
        }
        return ans;
    }
};
