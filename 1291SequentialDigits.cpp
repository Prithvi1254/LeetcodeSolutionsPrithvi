class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        string num[]={"1","2","3","4","5","6","7","8","9"};
        for(int i=0;i<9;i++){
            string temp="";
            for(int j=i;j<9;j++){
                temp+=num[j];
                if(stoi(temp)>=low and stoi(temp)<=high){
                    ans.push_back(stoi(temp));
                }
                else if(stoi(temp)>high) break;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
