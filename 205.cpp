class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(int i=0;i<s.size();i++){
            if(mp1.find(s[i])==mp1.end() and mp2.find(t[i])==mp2.end()){
                mp1[s[i]]=t[i];
                mp2[t[i]]=s[i];
            }
            else{
                if(mp1[s[i]]!=t[i]) return false;
                if(mp2[t[i]]!=s[i]) return false;
            }
        }
        return true;
    }
};
