class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        int carry = 0;

        // Dummy node
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        while (l1 != nullptr || l2 != nullptr || carry) {

            int sum = carry;

            // Add l1 value if exists
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }

            int digit = sum % 10;
            carry = sum / 10;

            temp->next = new ListNode(digit);

            temp = temp->next;
        }

        return dummy->next;
    }
};