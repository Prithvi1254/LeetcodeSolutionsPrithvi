class Solution {
public:
    int pivotInteger(int n) {
        int brea=n;
        int tsum=n*(n+1)/2;
        int psum=tsum;
        int asum=n;
        while(brea>=0){
            if(psum==asum) return brea;
            psum-=brea;
            brea--;
            asum+=brea;
        }
        return -1;
    }
};
