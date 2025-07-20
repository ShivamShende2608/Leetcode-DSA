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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode dummy (0, head);
         int prefix = 0;
        unordered_map<int, ListNode*> lastSeen;
        lastSeen[0] = &dummy;

        for (ListNode* cur = head; cur; cur = cur->next) {
            prefix += cur->val;
            lastSeen[prefix] = cur;
        }

        prefix = 0;
        for (ListNode* cur = &dummy; cur; cur = cur->next) {
            prefix += cur->val;
            cur->next = lastSeen[prefix]->next;
        }

        return dummy.next;
        
    }
};
