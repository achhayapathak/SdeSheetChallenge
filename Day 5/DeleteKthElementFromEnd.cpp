/*
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
*/

Node* removeKthNode(Node* head, int n)
{
    // Write your code here.
    Node* fast = head, *slow = head;

        for(int i=0; i<n; i++) {
            fast = fast->next;
        }

        if(!fast)
            return head->next;

        while(fast->next) {
            slow = slow->next;
            fast = fast->next;
        }

        if(slow && slow->next)
            slow->next = slow->next->next;

        return head;
}
