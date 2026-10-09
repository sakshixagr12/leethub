/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
    //     if (!head){
    //         return nullptr;
    //     }
    //     Node* curr = head;

    //     while (curr) {
    //         Node* node = curr->next;
    //         curr->next = new Node(curr->val);
    //         curr->next->next=node;
    //         curr=node;
    //     }

    //     // assigning random pointers

    //    curr = head;

    //    for( ; curr!=nullptr; curr=curr->next->next) {

    //         curr->next->random = (curr->random)?curr->random->next:nullptr;
    //    }

    //    // separating original and duplicates

    //    Node* head2 = head->next;
    //    Node* clone = head2;

    //    for (curr=head; curr!=nullptr; curr=curr->next) 
    //    {
    //         curr->next = curr->next->next;
    //         clone->next = (clone->next)? clone->next->next : nullptr;
    //         clone = clone->next;
    //    }
    //     return head2;

     if (!head) return NULL;
    Node * curr = head;
    while (curr) {
        Node * nextnode = curr -> next;
        Node * newnode = new Node(curr -> val);
        curr -> next = newnode;
        newnode -> next = nextnode;
        curr = nextnode;
    }

    // assigning the random pointers of cloned nodes
    for (Node * curr = head; curr != NULL; curr = curr -> next -> next) {
        curr -> next -> random = (!curr -> random) ? NULL : curr -> random -> next;
    }
    Node * head2 = head -> next;
    Node * clone = head2;

    for (Node * curr = head; curr != NULL; curr = curr -> next) {
        Node*temp=curr->next;
        curr -> next = curr -> next -> next;
        clone -> next = clone -> next ? clone -> next -> next : NULL;
        clone = clone -> next;
    }
    return head2;
    }

};