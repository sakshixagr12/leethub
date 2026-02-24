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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr) return  nullptr;
        int c=0;
        ListNode *temp=head;
        while(temp!=nullptr){
            c++;
            temp=temp->next;
        }
        if(c==n) return head->next;
        int res=c-n;
        temp=head;
        while(temp!=nullptr){
            res--;
            if(res==0){
                ListNode *req=temp->next;
                temp->next=temp->next->next;
                delete req;
                break;
            }
            temp=temp->next;
        }
        return head;
    }
};