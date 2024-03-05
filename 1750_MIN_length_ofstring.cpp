class Solution {
public:
    int minimumLength(string s) {
        int n=s.size();
        if(s[0]!=s[n-1]) return n;
        int left=0;
        int right=n-1;
        while(left<right){
            if(s[left]!=s[right]) break;
            char x=s[left];
            int a=left;
            bool f=true;
            while(f and a<=right){
                if(s[a]==x) a++;
                else f=false;
            }
            left=a;
            int b=right;
            f=true;
            while(f and b>left){
                if(s[b]==x) b--;
                else f=false;
            }
            right=b;
        }
        return right-left+1;
    }
};
