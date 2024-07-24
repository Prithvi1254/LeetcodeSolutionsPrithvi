class Solution {
public:
    static bool comp(pair<int,int>a,pair<int,int>b){
        return a.first<b.first;
    }
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<int>ans;
        vector<pair<int,int>>store;
        vector<int>mp(10);
        for(int i=0;i<10;i++){
            
            mp[i]=mapping[i];
        }
        for(auto x:nums){
            string temp;
            string curr=to_string(x);
            for(char x:curr){
                temp += to_string(mp[x - '0']);
            }
            int a=stoi(temp);
            store.push_back({a,x});
        }
        sort(store.begin(),store.end(),comp);
        for(auto x:store){
            ans.push_back(x.second);
        }
        return ans;
    }
};
