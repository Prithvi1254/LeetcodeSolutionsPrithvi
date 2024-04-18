class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans=0;
        int row[]={0,1,0,-1};
        int col[]={1,0,-1,0};
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    int count=4;
                    for(int a=0;a<4;a++){
                        int nr=row[a]+i;
                        int nc=col[a]+j;
                        if(nr<0 or nc<0 or nr>=n or nc>=m) continue;
                        if(grid[nr][nc]==1) count--;
                    }
                    ans+=count;
                }
            }
        }
        return ans;
    }
};
