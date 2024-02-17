class Solution {
    private:
    
public:
    
    void help(vector<vector<int>>&visited,int i,int j,vector<vector<char>>& board){
        int n=board.size();
        int m=board[0].size();
        int row[]={1,0,-1,0};
        int col[]={0,1,0,-1};
        if(visited[i][j]==1) return;
        visited[i][j]=1;
        for(int k=0;k<4;k++){
            int nr=row[k]+i;
            int nc=col[k]+j;
            if(nr<0 or nc<0 or nr>=n or nc>=m) continue;
            if(board[nr][nc]=='O'){
                help(visited,nr,nc,board);
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));
        int i=0;
        for(int j=0;j<m;j++){
            if(board[i][j]=='O'){
                help(visited,i,j,board);
            }
        }
        int j=0;
        for(i=0;i<n;i++){
            if(board[i][j]=='O'){
                help(visited,i,j,board);
            }
        }
        i=n-1;
        for(int j=0;j<m;j++){
            if(board[i][j]=='O'){
                help(visited,i,j,board);
            }
        }
        j=m-1;
        for(i=0;i<n;i++){
            if(board[i][j]=='O'){
                help(visited,i,j,board);
            }
        }
        for(int ii=0;ii<n;ii++){
            for(int jj=0;jj<m;jj++){
                if(visited[ii][jj]!=1){
                    board[ii][jj]='X';
                }
            }
        }
    }
};
