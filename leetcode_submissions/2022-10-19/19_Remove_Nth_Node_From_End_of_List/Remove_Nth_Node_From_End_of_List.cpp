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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(!head->next && n==head->val) return NULL;
        else if(!head->next && n!=head->val) return head;
        
        
        ListNode* temp=head,*t=head;
        
        for(int i=0;i<n;i++) {
            temp=temp->next;
        }
        
        
        while(temp->next) {
            temp=temp->next;
            t=t->next;
        }
        
        t->next=t->next->next;
        return head;
    }
};