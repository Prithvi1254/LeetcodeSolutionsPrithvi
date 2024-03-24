class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int>st;
        for(auto x:nums){
            if(st.find(x)!=st.end()) return x;
            st.insert(x);
        }
        return -1;
    }
};
