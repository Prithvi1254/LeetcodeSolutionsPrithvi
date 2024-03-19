class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int maxi=0;
        unordered_map<int,int>mp;
        for(int i=0;i<tasks.size();i++){
            mp[i]++;
            maxi=max(maxi,mp[i]);
        }
        int count=0;
        for(auto x:mp){
            if(x.second==maxi) count++;
        }
        int ans=(maxi-1)*(n+1);
        ans+=count;
        int nn=tasks.size();
        return max(ans,nn);
    }
};
