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
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* temp = head;
        ListNode* tail=nullptr;
        int count = 0;
        while (temp != nullptr) {
            count++;
            tail=temp;
            temp = temp->next;
        }
        tail->next=head;
        k=(k%count);
        temp=head;
        for(int i=0;i<count-k-1;i++){
            temp=temp->next;
        }
        head=temp->next;
        temp->next=nullptr;
        return head;

    }
};