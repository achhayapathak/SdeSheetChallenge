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
        // if (head == nullptr) {
        //     return nullptr;
        // }

        // ListNode *prev = NULL;
        // ListNode *curr = head;
        // ListNode *nex = curr->next;

        // while(nex) {
        //     curr->next = prev;
        //     prev = curr;
        //     curr = nex;
        //     nex = nex->next;
        // }
        // curr->next = prev;

        // return curr;

        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* head1 = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;

        return head1;

    }
};