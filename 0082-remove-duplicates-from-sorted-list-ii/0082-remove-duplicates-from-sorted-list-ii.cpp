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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr)return nullptr;
        if(head->next==nullptr)return head;
        ListNode *curr=head;
        ListNode* prev=nullptr;
        ListNode* temp=curr->next;
        while(curr && temp) {

            //if adjancents r not same
            if(curr->val!=temp->val ){
                prev=curr;
                curr=temp;
                temp=temp->next;
            }else{
                while(temp && temp->val==curr->val){
                    temp=temp->next;
                }
                curr=temp;
                if(temp)
                    temp=temp->next;
                //prev->next=curr;
                if(prev){
                    prev->next=curr;
                } else {
                    head=curr;
                }
            }
        }
        return head;
    }
};