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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr)return nullptr;
        ListNode*curr=head;
        ListNode*temp=nullptr;
        ListNode*prev=nullptr;
        while(curr!=nullptr) {
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==nullptr) return nullptr;
        if(left==right) return head;
        
        ListNode*temp = head;
        int cnt = 1;
        ListNode*prevLeft=nullptr;
        while(cnt<left&&temp!=nullptr){
            prevLeft=temp;
            cnt++;
            temp=temp->next;
        }
        ListNode*newHead=temp;
        ListNode*t=newHead;
        while(cnt<=right&&temp!=nullptr){
            t=temp;
            temp=temp->next;
            cnt+=1;
        }
        t->next=nullptr;
        ListNode*revHead=reverseList(newHead);
        if(prevLeft!=nullptr){
            prevLeft->next=revHead;
        }else{
            head=revHead;
        }
        newHead->next=temp;
        return head;
    }
};