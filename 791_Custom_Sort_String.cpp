class Solution {
public:
    string customSortString(string order, string s) {
        string ans="";
        map<char,int>mp;
        for(char x:s){
            mp[x]++;
        }
        map<char,int>mp1;
        for(char x:order){
            mp1[x]++;
        }
        for(auto x:order){
            int y=mp[x];
            while(y>0){
                ans+=x;
                y--;
            }
        }
        for(char x:s){
            if(mp1.find(x)==mp1.end()){
                ans+=x;
            }
        }
        return ans;
    }
};
