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
    
    void help(ListNode* &head) {
        
        if(!head) return;
        
        if(head->next) swap(head->val,head->next->val);
        else return;
        
        if(head->next->next != NULL) help(head->next->next);
        else return;
    }
    
    ListNode* swapPairs(ListNode* head) {
        
        if(!head || !head->next) return head;
        
        help(head);
        
        return head;
    }
};