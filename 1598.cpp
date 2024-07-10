class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count=0;
        for(auto x:logs){
            if(x=="../"){
                count--;
                count=max(count,0);
            }
            else if(x=="./") continue;
            else count++;
        }
        return max(0,count);
    }
};
