class Solution {
public:
    void help(int i,vector<int>&visited,vector<vector<int>>& isConnected){
        if(visited[i]==1) return;
        visited[i]=1;
        int m=isConnected[0].size();
        for(int j=0;j<m;j++){
            if(isConnected[i][j]==1){
                help(j,visited,isConnected);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int m=isConnected[0].size();
        int ans=0;
        vector<int>visited(n,0);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                ans++;
                help(i,visited,isConnected);
            }
        }
        return ans;
    }
};
