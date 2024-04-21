class Solution {
public:
    void dfs(vector<vector<int>>&adj,int node,vector<int>& visited){
        if(visited[node]==1) return;
        visited[node]=1;
        for(auto x:adj[node]){
            dfs(adj,x,visited);
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source==destination) return true;
        vector<int>visited(n,0);
        vector<vector<int>>adj(n);
        for(auto x:edges){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        
        for(auto x:adj[source]){
            dfs(adj,source,visited);
        }
        return visited[destination];
    }
};
