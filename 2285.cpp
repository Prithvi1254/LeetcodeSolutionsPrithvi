class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<long long>store(n,0);
        for(auto x:roads){
            store[x[0]]++;
            store[x[1]]++;
        }
        sort(store.begin(),store.end());
        long long ans=0;
        int temp=n;
        for(int i=n-1;i>=0;i--){
            ans+=(temp*store[i]);
            temp--;
        }
        return ans;
    }
};
