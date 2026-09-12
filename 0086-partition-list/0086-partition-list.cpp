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
    ListNode* partition(ListNode* head, int x) {
        if (!head) {
            return nullptr;
        }
        ListNode* start_small = nullptr;
        ListNode* start_large = nullptr;
        ListNode* end_small = nullptr;
        ListNode* end_large = nullptr;
        ListNode* curr = head;

        while (curr)
        {
            int y = curr->val;
            ListNode* next = curr->next;
            if(y < x) {
                if (!start_small){
                    start_small=end_small=curr;
                }
                else {
                    end_small->next = curr;
                    end_small = curr;
                }
            }
            else {
                if (!start_large) {
                    start_large = end_large = curr;
                }
                else {
                    end_large->next = curr;
                    end_large = curr;
                }
            }
            curr = next;
        }

        if (start_small) {
            end_small->next = start_large;
            
            if (end_large)
                end_large->next = nullptr;
            return start_small;
        }
        return start_large;
    }
};