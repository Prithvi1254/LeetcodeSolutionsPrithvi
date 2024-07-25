class Solution {
public:
    vector<int>merge(vector<int>a,vector<int>b){
        int n=a.size();
        int m=b.size();
        vector<int>ans;
        int i=0;
        int j=0;
        while(i<n and j<m){
            if(a[i]<=b[j]){
                ans.push_back(a[i]);
                i++;
            }
            else{
                ans.push_back(b[j]);
                j++;
            }
        }
        while(i<n){
            ans.push_back(a[i]);
            i++;
        }
        while(j<m){
            ans.push_back(b[j]);
            j++;
        }
        return ans;
    }
    vector<int>partition(vector<int>&nums,int left, int right){
        if(left>right) return {};
        if(left==right) return {nums[left]};
        int mid=(left+right)/2;
        vector<int>a=partition(nums,left,mid);
        vector<int>b=partition(nums,mid+1,right);
        return merge(a,b);
    }
    vector<int> sortArray(vector<int>& nums) {
        return partition(nums,0,nums.size()-1);
    }
};
