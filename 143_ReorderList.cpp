class Solution {
public:
    ListNode* reverse(ListNode*head){
        if(head==NULL) return NULL;
        ListNode*curr=head;
        ListNode*prev=NULL;
        ListNode*nxt=head;
        while(curr!=NULL){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode*fast=head->next;
        ListNode*slow=head;
        while(fast!=NULL and fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode*temp=reverse(slow->next);
        slow->next=NULL;
        ListNode*nxt1=NULL;
        ListNode*nxt2=NULL;
        ListNode*ans=head;
        while(head!=NULL and temp!=NULL){
            nxt1=head->next;
            nxt2=temp->next;
            head->next=temp;
            temp->next=nxt1;
            head=nxt1;
            temp=nxt2;
        }
        head=ans;
    }
};
