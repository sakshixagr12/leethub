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

ListNode * reversell( ListNode *head){
    if(head==nullptr||head->next==nullptr) return head;
    ListNode *newhead= reversell(head->next);
    ListNode *front=head->next;
    front->next=head;
    head->next=nullptr;
    return newhead;

}
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==nullptr||head->next==nullptr) return true;
        ListNode *fast=head;
        ListNode *slow=head;
        while(fast->next!=nullptr&&fast->next->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode * newHead= reversell(slow->next);
        ListNode *first=head;
        ListNode *second=newHead;
        while(second!=nullptr){
            if(first->val != second->val){
                reversell(newHead);
                return false;
            }
            first=first->next;
            second=second->next;
        }
        reversell(newHead);
        return true;





        
    }
};