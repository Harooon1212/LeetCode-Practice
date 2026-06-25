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
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* result=new ListNode(0);
        ListNode* temp=result;
        while(list1!=nullptr && list2!=nullptr){
            if(list1->val < list2-> val){
                temp->next=list1;
                list1=list1->next;
            }
            else{
                temp->next=list2;
                list2=list2->next;
            }
            temp=temp->next;
        }
        if(list1!=nullptr) temp->next=list1;
        if(list2!=nullptr) temp->next=list2;

        return result->next;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty())
            return nullptr;
        int k=lists.size();
        int count=0;
        ListNode* temp=lists[0];
        for(int i=1;i<k;i++){
            temp=mergeTwoLists(temp,lists[i]);
        }
        return temp;      
    }
};