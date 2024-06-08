class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>mp(26,0);
        int maxi=0;
        int left=0;
        int ans=0;
        for(int right=0;right<s.size();right++){
            mp[s[right]-'A']++;
            maxi=max(maxi,mp[s[right]-'A']);
            while(right-maxi>k){
                mp[s[left]-'A']--;
                int a=0;
                for(int i=0;i<26;i++){
                    a=max(a,mp[i]);
                }
                maxi=a;
                left++;
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};
