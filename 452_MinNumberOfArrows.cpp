class Solution {
public:
    static bool comp(vector<int>a,vector<int>b){
        return a[1]<b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),comp);
        int ans=1;
        int start=points[0][1];
        int n=points.size();
        for(int i=0;i<n;i++){
            if(start<=points[i][1] and start>=points[i][0]){
                continue;
            }
            ans++;
            start=points[i][1];
        }
        return ans;
    }
};
