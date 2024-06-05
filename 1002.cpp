class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        map<char,int>mp1;
        for(char x:words[0]){
            mp1[x]++;
        }
        for(auto x:words){
            map<char,int>mp2;
            for(char s:x){
                mp2[s]++;
            }
            for(auto& x:mp1){
                if(mp2[x.first]==0){
                    mp1[x.first]=0;
                }
                else{
                    x.second=min(x.second,mp2[x.first]);
                }
            }
        }
        vector<string>ans;
        for(auto x:mp1){
            while(x.second>0){
                ans.push_back(string(1, x.first));
                x.second--;
            }
        }
        return ans;
    }
};
