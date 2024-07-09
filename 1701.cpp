class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double n=customers.size();
        int last=0;
        double ans=0;
        for(auto x:customers){
            int a=x[0];
            last=max(last,a);
            last+=x[1];
            ans+=(last-x[0]);

        }
        return ans/n;
    }
};
