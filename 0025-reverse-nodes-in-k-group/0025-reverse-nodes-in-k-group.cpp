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
        if (!head)
        {
            return nullptr;
        }
        int c = 0;
        ListNode* node = head;

        while (node && c<k) 
        {
            c++;
            node=node->next;
        }
        if (c<k)
        {
            return head;
        }

        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* temp = nullptr;
        int cnt = 0;
        while (curr && cnt < k)
        {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;

            cnt++;
        }

        if (temp) {
            ListNode* revhead = reverseKGroup(temp,k);
            head->next = revhead;
        }
        return prev;
    }
};