class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        int left=0;
        int right=0;
        for(int i=0;i<n/2;i++){
            if(s[i]=='a' or s[i]=='A' or s[i]=='E' or s[i]=='e' or s[i]=='i' or s[i]=='I' or s[i]=='O' or s[i]=='o' or s[i]=='U' or s[i]=='u'){
                left++;
            }
        }
        for(int i=n/2;i<n;i++){
            if(s[i]=='a' or s[i]=='A' or s[i]=='E' or s[i]=='e' or s[i]=='i' or s[i]=='I' or s[i]=='O' or s[i]=='o' or s[i]=='U' or s[i]=='u'){
                right++;
            }
        }
    
    return left==right;
    }
};
