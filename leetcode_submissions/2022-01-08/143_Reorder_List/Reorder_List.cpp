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
    void reorderList(ListNode* head) {
        
        if(!head || !head->next || !head->next) return;
        
        ListNode* second=head;
        
        while(second->next->next) second=second->next;
        
        ListNode* temp=second->next;
        second->next=NULL;
        temp->next=head->next;
        head->next=temp;
        
        reorderList(head->next->next);
        
    }
};