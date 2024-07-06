class Solution {
public:
    int passThePillow(int n, int time) {
        int curr=1;
        bool flag=true;
        while(time>0){
            if(flag){
                curr++;
            }
            else{
                curr--;
            }
            if(curr==n or curr==1){
                flag=!flag;
            }
            time--;
        }
        return curr;
    }
};
