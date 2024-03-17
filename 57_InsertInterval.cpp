class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        ans.push_back(intervals[0]);
        int left=0;
        int n=intervals.size();
        for(int i=1;i<n;i++){
            if(ans[left][1]>=intervals[i][0]){
                ans[left][1]=max(ans[left][1],intervals[i][1]);
            }
            else{
                ans.push_back(intervals[i]);
                left++;
            }
        }
        return ans;
    }
};
