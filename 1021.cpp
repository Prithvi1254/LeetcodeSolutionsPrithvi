class Solution {
public:
    string removeOuterParentheses(string s) {
        int left=0;
        string ans="";
        int open=0;
        int close=0;
        for(int right=0;right<s.size();right++){
            if(s[right]=='(') open++;
            else close++;
            if(open==close){
                ans+=s.substr(left+1,2*open-2);
                left=right+1;
                open=0;
                close=0;
            }
        }
        return ans;
    }
};
