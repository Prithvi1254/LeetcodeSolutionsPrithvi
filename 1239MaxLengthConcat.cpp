class Solution {
public:
    void help(vector<string>&arr ,int &ans,int i,int size,set<char>&st){
        if(i>=arr.size()) return;
        string s=arr[i];
        bool f=true;
        for(char x:s){
            if(st.find(x)!=st.end()){
                f=false;
            }
        }
        set<char>neww;
        for(auto x:st){
            neww.insert(x);
        }
        set<char>news;
        for(char x:s){
            if(news.find(x)!=news.end()) f=false;
            news.insert(x);
        }
        if(f==true){
            for(char x:s){
                neww.insert(x);
            }
            size+=s.size();
            ans=max(ans,size);
            help(arr,ans,i+1,size,neww);
            size-=s.size();
        }
        ans=max(ans,size);
        help(arr,ans,i+1,size,st);
    }
    int maxLength(vector<string>& arr) {
        int ans=INT_MIN;
        set<char>st;
        help(arr,ans,0,0,st);
        return ans;
    }
};
