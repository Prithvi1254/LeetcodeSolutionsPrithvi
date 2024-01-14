class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>st1;
        vector<int>st2;
        set<char>s1;
        set<char>s2;
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(char x:word1){
            s1.insert(x);
            mp1[x]++;
        }
        for(char x:word2){
            mp2[x]++;
            s2.insert(x);
        }
        for(auto x:mp1){
            st1.push_back(x.second);
        }
        for(auto x:mp2){
            st2.push_back(x.second);
        }
        if(s1!=s2) return false;
        sort(st1.begin(),st1.end());
        sort(st2.begin(),st2.end());
        return st1==st2;
    }
};
