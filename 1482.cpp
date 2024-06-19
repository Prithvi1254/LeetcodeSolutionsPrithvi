class Solution {
public:
    int calculate(vector<int>&bloom,int k,int mid){
        int ans=0;
        int count=0;
        for(auto x:bloom){
            if(x<=mid){
                count++;
            }
            else{
                ans+=(count/k);
                count=0;
            }
        }
        ans+=(count/k);
        return ans;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int mini=INT_MAX;
        int maxi=0;
        for(auto x:bloomDay){
            mini=min(mini,x);
            maxi=max(maxi,x);
        }
        int left=mini;
        int right=maxi;
        int n=bloomDay.size();
        if((long)m*k>n) return -1;
        int ans=-1;
        while(left<=right){
            int mid=(left+right)/2;
            int a=calculate(bloomDay,k,mid);
            if(a>=m){
                ans=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return ans;
    }
};
