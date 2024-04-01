class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int last=s.size()-1;
        while(s[last]==' ' and last>=0){
            last--;
        }
        if(last<0) return 0;
        for(int i=last;i>=0;i--){
            if(s[i]==' ') break;
            count++;
        }
        return count;
    }
};
