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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head) return NULL;
        ListNode* node = head;
        int c = 0;
        while (node && c<k){
            node = node->next;
            c++;
        }
        if (c<k)
            return head;
        ListNode*curr=head;
        ListNode*prev=NULL;
        ListNode*temp=NULL;
        int cnt = 0;
        while(curr && cnt < k) {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
            cnt++;
        }
        if(temp) {
            ListNode* restHead = reverseKGroup(temp,k);
            head->next = restHead;
        }
        return prev;
    }
};