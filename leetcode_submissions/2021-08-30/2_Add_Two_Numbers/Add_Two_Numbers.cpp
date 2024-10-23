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
    
    ListNode* add(ListNode* &l1, ListNode* &l2,int c) {
        
        int d1,d2,sum;
        if(l1==NULL && l2==NULL) {
            return c ? new ListNode(1) : nullptr;
        } 
        
        d1 = l1 ? l1->val : 0;
        d2 = l2 ? l2->val : 0;
        
        sum=d1+d2+c;
        
        return new ListNode (sum%10 , add(l1 ? l1->next : l1,l2 ? l2->next : l2, sum/10));
        
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
  
        if(!l1) return l2;
        if(!l2) return l1;
        
        return add(l1,l2,0);        
    }
};