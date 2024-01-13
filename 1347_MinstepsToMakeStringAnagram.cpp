class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>mp1;
        map<char,int>mp2;
        for(char x:s){
            mp1[x]++;
        }
        for(char x:t){
            mp2[x]++;
        }
        int less=0;
        int more=0;
        for(auto x:mp1){
            int a=x.second-mp2[x.first];
            if(a<0){
                more+=abs(a);
            }
            else{
                less+=a;
            }
        }
        return max(less,more);
    }
};
