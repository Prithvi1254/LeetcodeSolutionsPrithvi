class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int left=0;
        int right=0;
        int a=nums1.size();
        int b=nums2.size();
        while(left<a and right<b){
            if(nums1[left]==nums2[right]) return nums1[left];
            else if(nums1[left]>nums2[right]) right++;
            else left++;
        }
        return -1;
    }
};
