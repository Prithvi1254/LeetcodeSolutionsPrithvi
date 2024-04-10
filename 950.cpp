class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n=deck.size();
        vector<int>ans(n,-1);
        queue<int>q;
        for(int i=0;i<n;i++){
            q.push(i);
        }
        sort(deck.begin(),deck.end());
        int i=0;
        while(!q.empty() and i<n){
            int ind=q.front();
            q.pop();
            if(!q.empty()){
                int b=q.front();
                q.pop();
                q.push(b);
            }
            ans[ind]=deck[i];
            i++;
        }
        return ans;
    }
};
