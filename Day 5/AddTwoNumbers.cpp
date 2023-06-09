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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* head = l1, *curr = l1;

        while(l1 && l2) {
            int val = l1->val + l2->val + carry;
            carry = val / 10;
            l1->val = val % 10;
            curr = l1;
            l1 = l1->next;
            l2 = l2->next;
        }

        while(l1) {
            int val = l1->val + carry;
            carry = val / 10;
            l1->val = val % 10;
            curr = l1;
            l1 = l1->next;
        }

        if(l2) 
            curr->next = l2;

        while(l2) {
            int val = l2->val + carry;
            carry = val / 10;
            l2->val = val % 10;
            curr = l2;
            l2 = l2->next;
        }

        if(carry) {
            curr->next = new ListNode(carry);
        }

        return head;
    }
};
