class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>lose;
        set<int>win;
        int n=matches.size();
        for(int i=0;i<n;i++){
            int wini=matches[i][0];
            int losi=matches[i][1];
            if(lose.find(wini)==lose.end()){
                win.insert(wini);
            }
            win.erase(losi);
            lose[losi]++;
        }
        vector<int>temp1;
        vector<int>temp2;
        vector<vector<int>>ans;
        for(auto it:lose){
            if(it.second==1) temp2.push_back(it.first);
        }
        for(auto it:win){
            temp1.push_back(it);
        }
        sort(temp1.begin(),temp1.end());
        ans.push_back(temp1);
        ans.push_back(temp2);
        return ans;
    }
};
