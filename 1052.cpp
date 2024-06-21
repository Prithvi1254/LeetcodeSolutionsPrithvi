class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int ans=0;
        int sum=0;
        int n=customers.size();
        for(int i=0;i<n;i++){
            if(grumpy[i]==0){
                sum+=customers[i];
            }
        }
        int left=0;
        int s=0;
        int g=0;
        for(int right=0;right<n;right++){
            if(grumpy[right]==1){
                s+=customers[right];
            }
            while(right-left+1>minutes){
                if(grumpy[left]==1){
                    s-=customers[left];
                }
                left++;
            }
            g=max(g,s);
        }
        return sum+g;
    }
};
