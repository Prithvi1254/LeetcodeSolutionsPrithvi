class Solution {
public:
    int help(string s,int last,char find){
        for(int i=last+1;i<s.size();i++){
            if(s[i]==find){
                return i;
            }
        }
        return 100000;
    }
    int appendCharacters(string s, string t) {
        int last=-1;
        int n=t.size();
        for(int i=0;i<n;i++){
            int a=help(s,last,t[i]);
            if(a==100000) return n-i;
            last=a;
        }
        return 0;
    }
};
