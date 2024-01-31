class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>ans(n);
        stack<pair<int,int>>st;
        for(int i=n-1;i>=0;i--){
                bool f=true;
                while(f and !st.empty()){
                    auto it=st.top();
                    if(it.first>temperatures[i]){
                        f=false;
                        
                    }
                    else{
                        st.pop();
                    }
                }
                if(st.empty()){
                    ans[i]=0;
                    st.push({temperatures[i],i});
                }
                else{
                    auto a=st.top();
                    ans[i]=a.second-i;
                    st.push({temperatures[i],i});
                }
            
        }
        return ans;
    }
};
