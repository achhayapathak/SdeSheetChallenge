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

// int length(Node *head) {
//         int count = 0;
//         while(head) {
//             count++;
//             head = head->next;
//         }

//         return count;
//     }

Node* findIntersection(Node *headA, Node *headB)
{
    //Write your code here
    // unordered_map<ListNode*, int> mp;

        // ListNode* temp1 = headA, *temp2 = headB;

        // while(temp1) {
        //     mp[temp1] = 1;
        //     temp1 = temp1->next;
        // }

        // while(temp2) {
        //     if(mp[temp2]) 
        //         return temp2;
        //     temp2 = temp2->next;
        // }

        // return NULL;

        // int n1 = length(headA);
        // int n2 = length(headB);

        // if(n1 > n2) {
        //     for(int i=0; i<n1-n2; i++) {
        //         headA = headA->next;
        //     }
        // } else {
        //     for(int i=0; i<n2-n1; i++) {
        //         headB = headB->next;
        //     }
        // }

        // while(headA && headB) {
        //     if(headA == headB) 
        //         return headA;

        //     headA = headA->next;
        //     headB = headB->next;
        // }

        // return NULL;

        Node *temp1 = headA, *temp2 = headB;

        while(temp1 != temp2) {
            temp1 = temp1 == NULL ? headB : temp1->next;
            temp2 = temp2 == NULL ? headA : temp2->next;
        }

        return temp1;
}
