class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(int i=0;i<target.size();i++){
            mp1[target[i]]++;
            mp2[arr[i]]++;
        }
        for(auto x:mp1){
            if(mp2.find(x.first)==mp2.end()) return false;
            else{
                if(x.second!=mp2[x.first]) return false;
            }
        }
        return true;
    }
};
