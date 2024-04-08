class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        vector<int>mp(2,0);
        for(auto x:students){
            if(x==0){
                mp[0]++;
            }
            else{
                mp[1]++;
            }
        }
        int n=sandwiches.size();
        for(int i=0;i<n;i++){
            if(sandwiches[i]==0){
                if(mp[0]==0) return n-i;
                else mp[0]--;
            }
            else{
                if(mp[1]==0) return n-i;
                else mp[1]--;
            }
        }
        return 0;
    }
};
