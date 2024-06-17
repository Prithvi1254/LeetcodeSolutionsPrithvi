class Solution {
public:
    
    bool judgeSquareSum(int c) {
        int left=0;
        int right=sqrt(c);
        while(left<=right){
            long long a=left*left;
            long long b=right*right;
            long long sum=a+b;
            if(sum==c) return true;
            if(sum>c){
                right--;
            }
            else{
                left++;
            }
        }
        return false;
    }
};
