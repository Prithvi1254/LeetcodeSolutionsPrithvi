class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n=s.size();
        set<int>ss;
        stack<int>st;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]==')'){
                if(st.empty()){
                    ss.insert(i);
                }
                else{
                    st.pop();
                }
            }
        }
        while(!st.empty()){
            ss.insert(st.top());
            st.pop();
        }
        string ans="";
        for(int i=0;i<n;i++){
            if(ss.find(i)==ss.end()){
                ans+=s[i];
            }
        }
        return ans;
    }
};
