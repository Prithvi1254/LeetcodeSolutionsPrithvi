class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        vector<int>store(26,0);
        int tar=target-'a';
        for(char x:letters){
            store[x-'a']++;
        }
        for(int i=tar+1;i<26;i++){
            if(store[i]>0) return i+'a'; 
        }
        return letters[0];
    }
};
