class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.size()==0 and n==1) return 1; 
        set<int>st;
        for(int i=1;i<=n;i++){
            st.insert(i);
        }
        for(auto x:trust){
            st.erase(x[0]);
        }
        for(auto x:st){
            int count=1;
            for(auto a:trust){
                if(a[1]==x){
                    count++;
                    if(count==n) return x;
                }
            }
        }
        return -1;
    }
};
