class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int n=tokens.size();
        for(int i=0;i<n;i++){
            if(tokens[i]!="+" and tokens[i]!="-" and tokens[i]!="/" and tokens[i]!="*"){
                st.push(stoi(tokens[i]));
            }
            else if(tokens[i]=="+"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                st.push(b+a);
            }
            else if(tokens[i]=="-"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                st.push(b-a);
            }
            else if(tokens[i]=="*"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                st.push(b*a);
            }
            else{
                
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                st.push(int(b/a));
            }
        }
        return st.top();
    }
};
