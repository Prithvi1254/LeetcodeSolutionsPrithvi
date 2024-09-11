class Solution {
public:
    int minBitFlips(int start, int goal) {
        int a=start^goal;
        int ans=0;
        while(a){
            ans+=(a&1);
            a>>=1;
        }
        return ans;
    }
};
