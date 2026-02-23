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
    bool hasCycle(ListNode *head) {
        // map<ListNode*,int>mpp;
        // ListNode * temp=head;
        // while(temp!=nullptr){
        //     if(mpp.find(temp)!=mpp.end()) return true;
        //     mpp[temp]++;
        //     temp=temp->next;
        // }
        // return false;
        if(head==nullptr ||  head->next==nullptr) return false;

        ListNode *slow=head;
        ListNode *fast=head;
        
        while(fast!=nullptr&&fast->next!=nullptr){
           
            fast=fast->next->next;
            slow=slow->next;

             if(fast==slow)return true;
        }
        return false;
    }
};