class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string> dict(dictionary.begin(), dictionary.end());
        string temp="";
        bool f=true;
        string ans="";
        for(char x:sentence){
            if(x==' '){
                ans+=temp;
                ans+=' ';
                temp="";
                f=true;
            }
            else{
                if(f==false) continue;
                temp+=x;
                if(dict.find(temp)!=dict.end()){
                    f=false;
                }
            }
        }
        ans+=temp;
        return ans;
    }
};
