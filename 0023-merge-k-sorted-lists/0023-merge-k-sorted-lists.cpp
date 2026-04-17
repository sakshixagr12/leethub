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
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode temp(0);
        ListNode *tail= &temp;
        while(list1 != nullptr && list2 != nullptr){
            if(list1->val <= list2->val){
                tail->next=list1;
                list1=list1->next;
            }else{
                tail->next = list2;
                list2 = list2->next;
            }
            tail=tail->next;
          
        }

        while(list1!=nullptr){
            tail->next=list1;
            list1=list1->next;
            tail=tail->next;
        }
        while(list2!=nullptr){
            tail->next=list2;
            list2=list2->next;
            tail=tail->next;
        }

        return temp.next;
        
    }
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if ( n == 0) return NULL;
        while(lists.size()>1){
            vector<ListNode*>temp;
            for(int i =0;i<lists.size();i+=2){
                if(i+1<lists.size())
                temp.push_back(mergeTwoLists(lists[i],lists[i+1]));
                else temp.push_back(lists[i]);
            }
            lists=temp;
        }
        return lists[0];
    }
};