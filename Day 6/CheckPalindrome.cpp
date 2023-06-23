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
    bool isPalindrome(ListNode* head) {
        ListNode* fast = head, *slow = head;

        while(fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }

        ListNode* prev = NULL, *nex = slow->next;

        while(nex) {
            slow->next = prev;
            prev = slow;
            slow = nex;
            nex = nex->next;
        }
        slow->next = prev;

        while(head && slow) {
            if(head->val != slow->val)
                return false;
            head = head->next;
            slow = slow->next;
        }

        return true;
    }
};