class Solution {
public:
    string makeGood(string s) {
        int n=s.size();
        stack<char>st;
        for(int i=0;i<n;i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(isupper(s[i]) and st.top()==s[i]+32){
                    st.pop();
            }
            else if(islower(s[i]) and st.top()==s[i]-32){
                    st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string ans="";
        while(!st.empty()){
            char a=st.top();
            st.pop();
            ans+=a;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
