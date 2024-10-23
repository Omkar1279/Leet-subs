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
    
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if(!l1 && !l2) return NULL;
        if(l1 && l2) {
            if(l1->val<=l2->val) return new ListNode(l1->val,mergeTwoLists(l1->next,l2));
            else return new ListNode(l2->val,mergeTwoLists(l1,l2->next));
        } 
        else if(!l1) return l2;
        else return l1;

    }
};