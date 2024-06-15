class Solution {
public:
    static bool comp(pair<int,int>a,pair<int,int>b){
        if(a.second==b.second) {
            return a.first>b.first;
        }
        return a.second<b.second;
    }
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int,int>>nums;
        int n=profits.size();
        for(int i=0;i<n;i++){
            nums.push_back({profits[i],capital[i]});
        }
        int i=0;
        sort(nums.begin(),nums.end(),comp);
        int ans=0;
        priority_queue<int> pq;
        while(k>0){
            k--;
            while(i<n and nums[i].second<=w){
                pq.push(nums[i].first);
                i++;
            }
            if(pq.empty()) break;
            w+=pq.top();
            ans+=pq.top();
            pq.pop();
        }
        return w;
    }
};
