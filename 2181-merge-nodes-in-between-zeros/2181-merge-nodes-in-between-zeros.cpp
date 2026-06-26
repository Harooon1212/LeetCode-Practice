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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        ListNode* current = head;
        ListNode* prev=NULL;
        int sum = 0;

        while (temp != NULL) {
            if (temp->val == 0) {
                current->val = sum;
                prev=current;
                current = current->next;
                sum = 0;              // Reset for next group
            } else {
                sum += temp->val;
            }
            temp = temp->next;
        }

        prev->next=NULL;
        return head;
    }
};