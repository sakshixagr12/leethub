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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int>res;
        if(head==nullptr)return nullptr;
        ListNode *temp=head;
        while(temp!=nullptr){
            res.push_back(temp->val);
            temp=temp->next;
        }
        int n = res.size();
        swap(res[k-1],res[n-k]);
        ListNode *head1=new ListNode(res[0]);
        ListNode *tail=head1;
        for(int i = 1;i<n;i++){
            tail->next = new ListNode(res[i]);
            tail = tail->next;
        }
        return head1;
    }
};