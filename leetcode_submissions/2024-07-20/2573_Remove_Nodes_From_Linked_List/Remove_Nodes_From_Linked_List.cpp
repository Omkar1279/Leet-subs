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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* cur = head;
        while (cur != nullptr) {
            ListNode* next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }

    ListNode* removeNodes(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        // Reverse the list
        ListNode* reversedHead = reverseList(head);

        // Process the reversed list to remove nodes
        ListNode* cur = reversedHead;
        while (cur != nullptr && cur->next != nullptr) {
            if (cur->val > cur->next->val) {
                cur->next = cur->next->next;
            } else {
                cur = cur->next;
            }
        }

        // Reverse the list back to the original order
        return reverseList(reversedHead);
    }
};
