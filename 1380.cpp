class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>min1(n,1e9);
        vector<int>max1(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                min1[i]=min(min1[i],matrix[i][j]);
                max1[j]=max(max1[j],matrix[i][j]);
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==min1[i] and matrix[i][j]==max1[j]){
                    ans.push_back(matrix[i][j]);
                }
            }
        }
        return ans;
    }
};
