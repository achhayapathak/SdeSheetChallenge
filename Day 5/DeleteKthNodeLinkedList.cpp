/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* curr = node;
        ListNode* nex = curr->next;

        while(nex->next) {
            curr->val = nex->val;
            curr = nex;
            nex = nex->next;
        }
        
        curr->val = nex->val;
        curr->next = NULL;
    }
};