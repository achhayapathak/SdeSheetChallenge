/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

Node *firstNode(Node *head)
{
    //    Write your code here.
    // unordered_map<ListNode*, int> mp;

        // while(head) {
        //     if(mp[head])
        //         return head;
            
        //     mp[head] = 1;
        //     head = head->next;
        // }

        // return NULL;

        if(head == NULL || head->next == NULL)
            return NULL;

        Node *slow = head, *fast = head, *entry = head;

        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {
                while(slow != entry) {
                slow = slow->next;
                entry = entry->next;
            }
            return slow;

            }
        }

        return NULL;
}