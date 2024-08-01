class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0;
        for(auto x:details){
            string temp=x.substr(11,2);
            if(stoi(temp)>60) ans++;
        }
        return ans;
    }
};
