class Solution {
public:
    int climbStairs(int n) {
        vector<int>store;
        if(n==1 or n==2) return n;
        store.push_back(1);
        store.push_back(2);
        n-=2;
        while(n>1){
            int a=store.size();
            int b=store[a-1];
            int c=store[a-2];
            store.push_back(b+c);
            n--;
        }
        int z=store.size();
        return store[z-1]+store[z-2];
    }
};
