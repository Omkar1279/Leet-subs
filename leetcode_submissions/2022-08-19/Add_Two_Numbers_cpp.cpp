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
    ListNode* f(ListNode* l1, ListNode* l2,int rem) {
        
        if(!l1 && !l2) {
            return (rem>0) ? new ListNode(rem) : NULL; 
        }
                    
        int sum= (l1 ? l1->val : 0) + (l2 ? l2->val : 0 ) + rem;
        
        return new ListNode(sum%10,f(l1 ? l1->next : l1,l2 ? l2->next : l2,sum/10));
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        while(!l1) return l2;
        while(!l2) return l1;
        
        return f(l1,l2,0);
        
    }
};