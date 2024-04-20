class Solution {
public:
    void dfs(vector<vector<int>>&visited,int i,int j,int &right,int &left,vector<vector<int>>& land){
        if(visited[i][j]) return;
        visited[i][j]=1;
        int n=land.size();
        int m=land[0].size();
        right=max(right,i);
        left=max(left,j);
        int row[]={1,0,-1,0};
        int col[]={0,1,0,-1};
        for(int a=0;a<4;a++){
            int nr=row[a]+i;
            int nc=col[a]+j;
            if(nr>=0 and nc>=0 and nr<n and nc<m and land[nr][nc]==1 and visited[nr][nc]==0){
                dfs(visited,nr,nc,right,left,land);
            }
        }
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int n=land.size();
        int m=land[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));
        int left1=0;
        int left2=0;
        int right1=0;
        int right2=0;
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visited[i][j] and land[i][j]==1){
                    left1=i;
                    left2=j;
                    right1=i;
                    right2=j;
                    dfs(visited,i,j,right1,right2,land);
                    ans.push_back({left1,left2,right1,right2});
                }
            }
        }
        return ans;
    }
};
