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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head) return nullptr;
        int n = 0;
        ListNode* temp = head;
        while (temp) {
            n++;
            temp = temp->next;
        }
        k = k % n;
        if (k==0) return head;

        temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = head;
        
        int cnt = 0;
        ListNode* t = head;
        while (cnt< n-k-1){
            t = t->next;
            cnt++;
        }
        ListNode* new_head = t->next;
        t->next = nullptr;
        return new_head;
    }
};