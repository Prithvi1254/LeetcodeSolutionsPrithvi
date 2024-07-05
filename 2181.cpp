class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode*prev=new ListNode(-1,head);
        ListNode*dummy=prev;
        ListNode*curr=head;
        while(curr){
            int ans=0;
            while(curr and curr->val!=0){
                ans+=curr->val;
                curr=curr->next;
            }
            if(ans!=0){
                prev->next=new ListNode(ans);
                prev=prev->next;
            }
            if(curr) curr=curr->next;
        }
        return dummy->next;
    }
};
