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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *prev = NULL, *curr = head, *nex = head->next;
        int count = 0;

        ListNode *temp = head;
        for(int i=0; i<k; i++) {
            if(temp == NULL)
                return head;
            temp = temp->next;
        }

        while(curr && count < k) {
            curr->next = prev;
            prev = curr;
            curr = nex;
            if(!curr)
                break;
            nex = nex->next;
            count++;
        }

        if(curr) 
            head->next = reverseKGroup(curr, k);

        return prev;
    }
};
