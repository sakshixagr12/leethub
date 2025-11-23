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
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr){
            return nullptr;
        }
        //int pos=-1;
        ListNode *slow=head;
        ListNode *fast=head;
        bool cycle=false;
        while(fast!=nullptr && fast->next != nullptr){
            slow=slow->next;
            
            fast=fast->next->next;
            if(fast==slow){
            cycle =true;
            break;
        }
        }
        if(cycle==true){
            slow= head;
            while(fast!=slow){
                slow=slow->next;
                fast=fast->next;
            }
            return slow;
            
        }
        

        return nullptr;
    }
};