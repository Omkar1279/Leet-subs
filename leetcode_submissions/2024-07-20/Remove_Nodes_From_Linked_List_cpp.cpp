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
    ListNode* removeNodes(ListNode* head) {
        
        ListNode* cur= head;
        stack<ListNode* > s;

        while(cur) {
            while (!s.empty() && s.top()->val < cur->val) {
                s.pop();
            }
            s.push(cur);
            cur=cur->next;
        }

        head=NULL;
        while (!s.empty()) {
            ListNode* top = s.top();
            s.pop();
            top->next = head;
            head = top;
        }
        return head;
    }
};