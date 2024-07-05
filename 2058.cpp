/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>store;
        if(head==NULL or head->next==NULL){
            return {-1,-1};
        }
        ListNode*curr=head->next;
        int index=1;
        ListNode*prev=head;
        while(curr){
            if(curr->next==NULL) break;
            if(curr->val>prev->val and curr->val>curr->next->val){
                store.push_back(index);
            }
            else if(curr->val<prev->val and curr->val<curr->next->val){
                store.push_back(index);
            }
            prev=prev->next;
            curr=curr->next;
            index++;

        }
        int mini=INT_MAX;
        int maxi=0;
        if(store.size()<2) return {-1,-1};
        int n=store.size();
        maxi=store[n-1]-store[0];
        for(int i=1;i<n;i++){
            mini=min(mini,store[i]-store[i-1]);
        }
        return {mini,maxi};
    }
};
