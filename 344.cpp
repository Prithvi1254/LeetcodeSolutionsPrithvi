class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        vector<char>ans(n);
        for(int i=0;i<n;i++){
            ans[n-i-1]=s[i];
        }
        s=ans;
    }
};
