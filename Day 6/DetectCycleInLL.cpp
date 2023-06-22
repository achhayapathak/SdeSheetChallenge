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

bool detectCycle(Node *head)
{
	//	Write your code here
    // unordered_map<ListNode*, int> mp;
        
        // while(head) {
        //     if(mp[head])
        //         return true;

        //     mp[head] = 1;
        //     head = head->next;
        // }
        
        // return false;

        Node *fast = head, *slow = head;

        while(fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;

            if(fast == slow)
                return true;
        }

        return false;
}