class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int maxi=0;
        int left=0;
        int n=tokens.size();
        int right=n-1;
        sort(tokens.begin(),tokens.end());
        int ans=0;
        while(left<=right){
            bool f=true;
            if(tokens[left]<=power){
                power-=tokens[left];
                ans++;
                maxi=max(maxi,ans);
                left++;
                f=false;
            }
            else{
                if(maxi>=1){
                    power+=tokens[right];
                    ans--;
                    right--;
                    f=false;
                }
                if(f==true) return maxi;
            }
        }
        return maxi;
    }
};
