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
    ListNode* add(ListNode* l1, ListNode* l2, int c) {
        if(!l1 && !l2) {
            return (c>0) ? new ListNode(c) : NULL;
        }

        int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + c;

        return new ListNode(sum%10,add(l1 ? l1->next : l1,l2 ? l2->next : l2,sum/10));

    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        return add(l1, l2, 0);

    }
};