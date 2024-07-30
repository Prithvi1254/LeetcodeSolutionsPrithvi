class Solution {
public:
    int minimumDeletions(string s) {
         int n=s.size();
         stack<char>st;
         int ans=0;
         for(int i=0;i<n;i++){
            if(!st.empty() and st.top()=='b' and s[i]=='a' ){
                st.pop();
                ans++;
            }
            else{
                st.push(s[i]);
            }
         }
         return ans;
    }
};
