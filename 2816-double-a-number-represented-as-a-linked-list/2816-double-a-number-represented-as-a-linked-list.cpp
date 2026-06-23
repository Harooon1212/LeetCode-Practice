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

    int helper(ListNode* node) {

        // base case
        if (node == nullptr) return 0;

        // get carry from next nodes
        int carry = helper(node->next);

        int sum = node->val * 2 + carry;

        node->val = sum % 10;

        return sum / 10;
    }

    ListNode* doubleIt(ListNode* head) {

        int carry = helper(head);

        // if carry left, add new head
        if (carry) {
            ListNode* newHead = new ListNode(carry);
            newHead->next = head;
            return newHead;
        }

        return head;
    }
};


   