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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int count=0;
        ListNode*prev=new ListNode(-1);
        prev->next=list1;
        ListNode*before=prev;
        ListNode*ahead=new ListNode(-1);
        ListNode*curr=list1;
        ListNode*nxt=new ListNode(-1);
        while(curr){
            nxt=curr->next;
            if(count==a) before=prev;
            if(count==b) ahead=nxt;
            count++;
            prev=curr;
            curr=curr->next;
        }
        before->next=list2;
        while(list2){
            if(list2->next==NULL){
                list2->next=ahead;
                break;
            }
            list2=list2->next;
        }
        return list1;
    }
};
